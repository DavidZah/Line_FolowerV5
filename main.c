/*Createt by David �ahour 
 *PID regulation for line folower and analog inputs on fot ATmega2560
 * 15.5.2019 on SOUEPL for robotic competition 
*/


#include <atmel_start.h>
#include <avr/delay.h>

#define MIN_BOOL_OFFSET 100
#define MIN_ERROR_OFFSET 20

#define PWM_COUNTER 250

#define INTEGRAL_OFFSET 100 

#define BASE_SPEED_LEFT   254
#define BASE_SPEED_RIGHT  254
#define MAX_SPEED  255
#define MIN_SPEED 0

#define KP 1
#define KD 0
#define Ki 0

uint16_t adc_buffer[8];
uint16_t sense_min_val[8];
uint16_t sense_max_val[8];
uint16_t motor_values[2]; 

int32_t error = 0; 
 
int32_t oper_pwm = 0 ; 

int16_t pwm_1 = 0; 
int16_t pwm_2 = 0; 

uint8_t start = 4; 

bool sense_line[8];
 
bool last_pos_left = false; 
bool last_pos_right = false;

bool on_start_line = false; 

void adc_sync_read_sensor(){
	adc_buffer [7] = ADC_0_get_conversion(0);
	adc_buffer [0] = ADC_0_get_conversion(1);
	adc_buffer [1] = ADC_0_get_conversion(2);
	adc_buffer [2] = ADC_0_get_conversion(3);
	adc_buffer [3] = ADC_0_get_conversion(4);
	adc_buffer [4] = ADC_0_get_conversion(5);
	adc_buffer [5] = ADC_0_get_conversion(6);
	adc_buffer [6] = ADC_0_get_conversion(7);
}

void sense_calibration(){
	
	uint32_t offset[8];	
	
	for (int y = 0; y < 8; y++){
		offset[y] = 0;
	}
	
	for (int x = 0; x < 100; x++){
		_delay_ms(25);
		adc_sync_read_sensor(); 
		for (int y = 0; y < 8; y++){
			offset[y] = offset[y] + adc_buffer[y]; 
		}	
	}
	for (int y = 0; y < 8; y++){
		sense_min_val[y] = offset[y] /100;
	}
	
	for (int y = 0; y < 8; y++){
		offset[y] = 0;
	}
	/*
	FOR future use max value kalibration 
	_delay_ms(10000); 
	
	for (int x = 0; x < 100; x++){
		_delay_ms(25);
		adc_sync_read_sensor(); 
		for (int y = 0; y < 8; y++){
			offset[y] = offset[y] + adc_buffer[y]; 
		}	
	}
	for (int y = 0; y < 8; y++){
		sense_max_val[y] = offset[y] /100;
	}
	*/
}

void get_line_pos(){
	
		for (int y = 0; y < 8; y++){
			if (adc_buffer[y] > sense_min_val[y]+MIN_BOOL_OFFSET){
				sense_line[y] = true; 		
			}
			else{
				sense_line[y] = false; 
			}	
		}
}

void get_stop_on_line(){
	
	static last_on_line; 
	
	if (sense_line[0]&&sense_line[1]&&sense_line[2]&&sense_line[3]&&sense_line[4]&&sense_line[5]&&sense_line[6]&&sense_line[7]){
		on_start_line = true; 
	}
	else{
		on_start_line = false; 
	}
	if (on_start_line == !last_on_line){
		start--; 
		_delay_ms(100); 
	}
	last_on_line = on_start_line; 	
	if (start == 0){
		OCR0A = 0; 
		OCR0B = 0; 
	}
	
}

void get_last_line_pos(){
	/*Out of line part*/
	if (!sense_line[0]&&!sense_line[1]&&!sense_line[2]&&!sense_line[3]&&!sense_line[4]&&!sense_line[5]&&!sense_line[6]&&sense_line[7]){
		last_pos_left = true;
	}
	if (sense_line[0]&&!sense_line[1]&&!sense_line[2]&&!sense_line[3]&&!sense_line[4]&&!sense_line[5]&&!sense_line[6]&&!sense_line[7]){
		last_pos_right = true;
	}
	if (sense_line[1]||sense_line[2]||sense_line[3]||sense_line[4]||sense_line[5]||sense_line[6]){
		last_pos_left = false;
		last_pos_right = false;
	}
}

void get_error(){
	int32_t sense[8];
	for (int y = 0; y < 8; y++){
			sense[y] = 0;  		
			}
	
	for (int y = 0; y < 8; y++){
			sense[y] = adc_buffer[y];
			sense[y] = sense[y] - (sense_min_val[y]+MIN_ERROR_OFFSET);
			if (sense[y]<0){
				sense[y] = 0; 
			}		
			}
	
		
	int32_t num = (-510 * (sense[0] - sense[7])) + (-350 * (sense[1] - sense[6])) + (-85 * (sense[2] - sense[5]))+(-15 * (sense[3] - sense[4]));

	int32_t denom = sense[0] + sense[1] + sense[2] + sense[3] + sense[4] + sense[5] + sense[6] + sense[7];
	if (denom != 0){
	error = num / denom;
	}
	else{
		error = 0; 
	}
}

void get_pid(){
	static int32_t integral; 
	static int32_t last_error; 
	static int32_t derivate; 
	
	if (error>INTEGRAL_OFFSET && error<INTEGRAL_OFFSET)
	{
		integral = integral + error; 
	}
	
	derivate = error - last_error; 
		
	last_error = error; 
	
	oper_pwm = (KP*error)+(Ki*integral)+(KD*derivate); 
}

void set_pwm(){
	int32_t oper_pwm_1 = BASE_SPEED_RIGHT - oper_pwm;
	int32_t oper_pwm_2 = BASE_SPEED_LEFT + oper_pwm;
	
	if (last_pos_left){
		oper_pwm_1 = -200; 
		oper_pwm_2 = 250;
	}
	if (last_pos_right){
		oper_pwm_1 = 250;
		oper_pwm_2 = -200;
	}
	
	if (oper_pwm_1 > 0){
		PIN_MOTOR_A_1_set_level(true);
		PIN_MOTOR_A_2_set_level(false);
	}
	else{
		PIN_MOTOR_A_1_set_level(false);
		PIN_MOTOR_A_2_set_level(true);
		oper_pwm_1 = oper_pwm_1 * -1; 
	}
	if (oper_pwm_2 > 0){
		PIN_MOTOR_B_1_set_level(true);
		PIN_MOTOR_B_2_set_level(false);
	}
	else{
		PIN_MOTOR_B_1_set_level(false);
		PIN_MOTOR_B_2_set_level(true);
		oper_pwm_2 = oper_pwm_2 * -1; 
	}
	
	if (oper_pwm_1 > MAX_SPEED){
		oper_pwm_1 = MAX_SPEED; 
	}
	if (oper_pwm_2 > MAX_SPEED){
		oper_pwm_2 = MAX_SPEED;
	}
	if (oper_pwm_1 < MIN_SPEED){
		oper_pwm_1 = 0;
	}
	if (oper_pwm_2 < MIN_SPEED){
		oper_pwm_2 = 0;
	}
	OCR0B = oper_pwm_1; 
	OCR0A = oper_pwm_2; 
}

ISR(TIMER1_COMPA_vect)
{
	/*Reguluation circle*/
	if (start !=0)
	{
	/**/
	adc_sync_read_sensor();
	/*Transfare line to bool*/
	get_line_pos();
	/*Get out of line position*/
	get_last_line_pos();
	/*Check for start line to stop*/
	get_stop_on_line(); 
	/*Calculate error*/
	get_error();
	/*Calculate PID */
	get_pid(); 
	/*Set PID reagulation on motors*/
	set_pwm();
	}
}


int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	sense_calibration();
	
	/*Ready for start up*/
	ENABLE_INTERRUPTS();
	
			
	/* Replace with your application code */
	while (1) {
		if (start==0)
		{
			OCR0A = 0;
			OCR0B = 0;
			PIN_MOTOR_A_1_set_level(false);
			PIN_MOTOR_A_2_set_level(false);
			PIN_MOTOR_B_1_set_level(false);
			PIN_MOTOR_B_2_set_level(false);
		}
	}
}
