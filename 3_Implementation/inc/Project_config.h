#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author NARESH D (naresh.d.2018.ece@ritchennai.edu.in)
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LDR_PORT (PORTC)   /**<LDR port Number */>

#define LDR1_PIN (PORTC4)    /**< LDR Pin Number */

#define LDR2_PIN  (PORTC5)   /**< LDR Pin number  */


#endif /* __PROJECT_CONFIG_H__ */
