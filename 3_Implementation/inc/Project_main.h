#ifndef __PROJECT_MAIN_H_
#define __PROJECT_MAIN_H_
/**
 * @file Project_main.h
 * @author NARESH D(naresh.d.2018.ece@ritchennai.edu.in)
 * @brief Project to Sun Tracking Solar Panel connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */
#define LDR_1 				/**< LDR State ldr1>ldr2  rotate right*/
#define LDR_2				/**< LDR state ldr2>ldr1 rotate left*/

#define LDR1_POS ()  /**< LED ON time in milli seconds  */
#define LDR2_POS ()   /**< LED OFF time in milli seconds */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


#endif /** __BLINKY_H_ */
