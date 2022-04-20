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

#define LDR1_POS (180)  /**< LDR1 Rotate Position */
#define LDR2_POS (0)   /**< LDR2 Rotate position */


/**
 * Function Definitions
 */

/**
 * @brief servo motor start
 * 
 * @return state Pin level to which the servo motor should be set
 */
void setup();
/**
 * @brief Rotating ldr1 & ldr2 
 * 
 * @return state Pin level to which the ldr1 & ldr2 should be set
 */
void loop();

#endif /**_PROJECT_MAIN_H_*/

