#include <atmel_start.h>
#include <avr/delay.h>

#define MIN_BOOL_OFFSET 100
#define MIN_ERROR_OFFSET 20

#define INTEGRAL_OFFSET 100 

#define BASE_SPEED 150
#define MAX_SPEED  400
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

bool sense_line[8]; 


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
	
	
	error = 4* sense[0]+3*sense[1]+2*sense[2]+sense[3]-sense[4]-2*sense[5]-3*sense[6]-4*sense[7];
	
	
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
	int32_t oper_pwm_1 = BASE_SPEED + oper_pwm;
	int32_t oper_pwm_2 = BASE_SPEED - oper_pwm;
	
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
	pwm_1 = oper_pwm_1; 
	pwm_2 = oper_pwm_2; 
}
/*PWM 1*/
ISR(TIMER0_COMPA_vect)
{
	static uint_fast16_t counter;
	
	if (counter == 0) {
		PIN_PWM_1_set_level(true);
		PIN_PWM_2_set_level(true);

	}
	if (counter == pwm_1){
		PIN_PWM_1_set_level(false); 
	}
	if (counter == pwm_2){
		PIN_PWM_2_set_level(false); 
	}
	if(counter == 500){
		counter = 0; 
	}
	else{
	counter++;
	}
}
ISR(TIMER1_COMPA_vect)
{
	adc_sync_read_sensor();
	get_line_pos();
	get_error();
	get_pid(); 
	set_pwm(); 			
}
int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	sense_calibration();
	ENABLE_INTERRUPTS();
		
	OCR0A =0xaa;
	
	OCR1A = 1000; // 1ms
	
	/* Replace with your application code */
	while (1) {
	}
}
