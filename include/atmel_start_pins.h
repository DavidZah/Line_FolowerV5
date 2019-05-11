/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set PIN_LED_1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_LED_1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PIN_LED_1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_LED_1_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(0, dir);
}

/**
 * \brief Set PIN_LED_1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_LED_1_set_level(const bool level)
{
	PORTA_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PIN_LED_1
 *
 * Toggle the pin level
 */
static inline void PIN_LED_1_toggle_level()
{
	PORTA_toggle_pin_level(0);
}

/**
 * \brief Get level on PIN_LED_1
 *
 * Reads the level on a pin
 */
static inline bool PIN_LED_1_get_level()
{
	return PORTA_get_pin_level(0);
}

/**
 * \brief Set PIN_LED_2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_LED_2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PIN_LED_2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_LED_2_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(1, dir);
}

/**
 * \brief Set PIN_LED_2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_LED_2_set_level(const bool level)
{
	PORTA_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PIN_LED_2
 *
 * Toggle the pin level
 */
static inline void PIN_LED_2_toggle_level()
{
	PORTA_toggle_pin_level(1);
}

/**
 * \brief Get level on PIN_LED_2
 *
 * Reads the level on a pin
 */
static inline bool PIN_LED_2_get_level()
{
	return PORTA_get_pin_level(1);
}

/**
 * \brief Set PIN_LED_3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_LED_3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PIN_LED_3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_LED_3_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(2, dir);
}

/**
 * \brief Set PIN_LED_3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_LED_3_set_level(const bool level)
{
	PORTA_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PIN_LED_3
 *
 * Toggle the pin level
 */
static inline void PIN_LED_3_toggle_level()
{
	PORTA_toggle_pin_level(2);
}

/**
 * \brief Get level on PIN_LED_3
 *
 * Reads the level on a pin
 */
static inline bool PIN_LED_3_get_level()
{
	return PORTA_get_pin_level(2);
}

/**
 * \brief Set PIN_MOTOR_A_1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_MOTOR_A_1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PIN_MOTOR_A_1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_MOTOR_A_1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(5, dir);
}

/**
 * \brief Set PIN_MOTOR_A_1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_MOTOR_A_1_set_level(const bool level)
{
	PORTB_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PIN_MOTOR_A_1
 *
 * Toggle the pin level
 */
static inline void PIN_MOTOR_A_1_toggle_level()
{
	PORTB_toggle_pin_level(5);
}

/**
 * \brief Get level on PIN_MOTOR_A_1
 *
 * Reads the level on a pin
 */
static inline bool PIN_MOTOR_A_1_get_level()
{
	return PORTB_get_pin_level(5);
}

/**
 * \brief Set PIN_MOTOR_2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_MOTOR_2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PIN_MOTOR_2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_MOTOR_2_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(6, dir);
}

/**
 * \brief Set PIN_MOTOR_2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_MOTOR_2_set_level(const bool level)
{
	PORTB_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PIN_MOTOR_2
 *
 * Toggle the pin level
 */
static inline void PIN_MOTOR_2_toggle_level()
{
	PORTB_toggle_pin_level(6);
}

/**
 * \brief Get level on PIN_MOTOR_2
 *
 * Reads the level on a pin
 */
static inline bool PIN_MOTOR_2_get_level()
{
	return PORTB_get_pin_level(6);
}

/**
 * \brief Set PB7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PB7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB7_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(7, dir);
}

/**
 * \brief Set PB7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB7_set_level(const bool level)
{
	PORTB_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PB7
 *
 * Toggle the pin level
 */
static inline void PB7_toggle_level()
{
	PORTB_toggle_pin_level(7);
}

/**
 * \brief Get level on PB7
 *
 * Reads the level on a pin
 */
static inline bool PB7_get_level()
{
	return PORTB_get_pin_level(7);
}

/**
 * \brief Set PD0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PD0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD0_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(0, dir);
}

/**
 * \brief Set PD0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD0_set_level(const bool level)
{
	PORTD_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PD0
 *
 * Toggle the pin level
 */
static inline void PD0_toggle_level()
{
	PORTD_toggle_pin_level(0);
}

/**
 * \brief Get level on PD0
 *
 * Reads the level on a pin
 */
static inline bool PD0_get_level()
{
	return PORTD_get_pin_level(0);
}

/**
 * \brief Set PIN_MOTOR_B_1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_MOTOR_B_1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PIN_MOTOR_B_1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_MOTOR_B_1_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(3, dir);
}

/**
 * \brief Set PIN_MOTOR_B_1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_MOTOR_B_1_set_level(const bool level)
{
	PORTE_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PIN_MOTOR_B_1
 *
 * Toggle the pin level
 */
static inline void PIN_MOTOR_B_1_toggle_level()
{
	PORTE_toggle_pin_level(3);
}

/**
 * \brief Get level on PIN_MOTOR_B_1
 *
 * Reads the level on a pin
 */
static inline bool PIN_MOTOR_B_1_get_level()
{
	return PORTE_get_pin_level(3);
}

/**
 * \brief Set PIN_MOTOR_B_2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_MOTOR_B_2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PIN_MOTOR_B_2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_MOTOR_B_2_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(4, dir);
}

/**
 * \brief Set PIN_MOTOR_B_2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_MOTOR_B_2_set_level(const bool level)
{
	PORTE_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PIN_MOTOR_B_2
 *
 * Toggle the pin level
 */
static inline void PIN_MOTOR_B_2_toggle_level()
{
	PORTE_toggle_pin_level(4);
}

/**
 * \brief Get level on PIN_MOTOR_B_2
 *
 * Reads the level on a pin
 */
static inline bool PIN_MOTOR_B_2_get_level()
{
	return PORTE_get_pin_level(4);
}

/**
 * \brief Set PG5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PG5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PG5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PG5_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(5, dir);
}

/**
 * \brief Set PG5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PG5_set_level(const bool level)
{
	PORTG_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PG5
 *
 * Toggle the pin level
 */
static inline void PG5_toggle_level()
{
	PORTG_toggle_pin_level(5);
}

/**
 * \brief Get level on PG5
 *
 * Reads the level on a pin
 */
static inline bool PG5_get_level()
{
	return PORTG_get_pin_level(5);
}

/**
 * \brief Set PIN_PWM_1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_PWM_1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTH_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PIN_PWM_1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_PWM_1_set_dir(const enum port_dir dir)
{
	PORTH_set_pin_dir(4, dir);
}

/**
 * \brief Set PIN_PWM_1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_PWM_1_set_level(const bool level)
{
	PORTH_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PIN_PWM_1
 *
 * Toggle the pin level
 */
static inline void PIN_PWM_1_toggle_level()
{
	PORTH_toggle_pin_level(4);
}

/**
 * \brief Get level on PIN_PWM_1
 *
 * Reads the level on a pin
 */
static inline bool PIN_PWM_1_get_level()
{
	return PORTH_get_pin_level(4);
}

/**
 * \brief Set PIN_PWM_2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PIN_PWM_2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTH_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PIN_PWM_2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PIN_PWM_2_set_dir(const enum port_dir dir)
{
	PORTH_set_pin_dir(5, dir);
}

/**
 * \brief Set PIN_PWM_2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PIN_PWM_2_set_level(const bool level)
{
	PORTH_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PIN_PWM_2
 *
 * Toggle the pin level
 */
static inline void PIN_PWM_2_toggle_level()
{
	PORTH_toggle_pin_level(5);
}

/**
 * \brief Get level on PIN_PWM_2
 *
 * Reads the level on a pin
 */
static inline bool PIN_PWM_2_get_level()
{
	return PORTH_get_pin_level(5);
}

/**
 * \brief Set PK0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PK0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK0_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(0, dir);
}

/**
 * \brief Set PK0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK0_set_level(const bool level)
{
	PORTK_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PK0
 *
 * Toggle the pin level
 */
static inline void PK0_toggle_level()
{
	PORTK_toggle_pin_level(0);
}

/**
 * \brief Get level on PK0
 *
 * Reads the level on a pin
 */
static inline bool PK0_get_level()
{
	return PORTK_get_pin_level(0);
}

/**
 * \brief Set PK1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PK1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK1_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(1, dir);
}

/**
 * \brief Set PK1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK1_set_level(const bool level)
{
	PORTK_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PK1
 *
 * Toggle the pin level
 */
static inline void PK1_toggle_level()
{
	PORTK_toggle_pin_level(1);
}

/**
 * \brief Get level on PK1
 *
 * Reads the level on a pin
 */
static inline bool PK1_get_level()
{
	return PORTK_get_pin_level(1);
}

/**
 * \brief Set PK2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PK2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK2_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(2, dir);
}

/**
 * \brief Set PK2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK2_set_level(const bool level)
{
	PORTK_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PK2
 *
 * Toggle the pin level
 */
static inline void PK2_toggle_level()
{
	PORTK_toggle_pin_level(2);
}

/**
 * \brief Get level on PK2
 *
 * Reads the level on a pin
 */
static inline bool PK2_get_level()
{
	return PORTK_get_pin_level(2);
}

/**
 * \brief Set PK3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PK3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK3_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(3, dir);
}

/**
 * \brief Set PK3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK3_set_level(const bool level)
{
	PORTK_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PK3
 *
 * Toggle the pin level
 */
static inline void PK3_toggle_level()
{
	PORTK_toggle_pin_level(3);
}

/**
 * \brief Get level on PK3
 *
 * Reads the level on a pin
 */
static inline bool PK3_get_level()
{
	return PORTK_get_pin_level(3);
}

/**
 * \brief Set PK4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PK4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK4_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(4, dir);
}

/**
 * \brief Set PK4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK4_set_level(const bool level)
{
	PORTK_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PK4
 *
 * Toggle the pin level
 */
static inline void PK4_toggle_level()
{
	PORTK_toggle_pin_level(4);
}

/**
 * \brief Get level on PK4
 *
 * Reads the level on a pin
 */
static inline bool PK4_get_level()
{
	return PORTK_get_pin_level(4);
}

/**
 * \brief Set PK5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PK5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK5_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(5, dir);
}

/**
 * \brief Set PK5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK5_set_level(const bool level)
{
	PORTK_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PK5
 *
 * Toggle the pin level
 */
static inline void PK5_toggle_level()
{
	PORTK_toggle_pin_level(5);
}

/**
 * \brief Get level on PK5
 *
 * Reads the level on a pin
 */
static inline bool PK5_get_level()
{
	return PORTK_get_pin_level(5);
}

/**
 * \brief Set PK6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PK6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK6_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(6, dir);
}

/**
 * \brief Set PK6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK6_set_level(const bool level)
{
	PORTK_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PK6
 *
 * Toggle the pin level
 */
static inline void PK6_toggle_level()
{
	PORTK_toggle_pin_level(6);
}

/**
 * \brief Get level on PK6
 *
 * Reads the level on a pin
 */
static inline bool PK6_get_level()
{
	return PORTK_get_pin_level(6);
}

/**
 * \brief Set PK7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PK7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK7_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(7, dir);
}

/**
 * \brief Set PK7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK7_set_level(const bool level)
{
	PORTK_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PK7
 *
 * Toggle the pin level
 */
static inline void PK7_toggle_level()
{
	PORTK_toggle_pin_level(7);
}

/**
 * \brief Get level on PK7
 *
 * Reads the level on a pin
 */
static inline bool PK7_get_level()
{
	return PORTK_get_pin_level(7);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
