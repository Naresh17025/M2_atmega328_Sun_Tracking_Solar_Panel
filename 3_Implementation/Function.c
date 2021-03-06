/**
 * @file function.c
 * @author NARESH D (naresh.d.2018.ece@ritchennai.edu.in)
 * @brief Project to SUN TRACKING SOLAR PANEL are connected to AVR328 MCU GPIO pin
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
/**
* @brief servo motor start
*
* @return state Pin level to which the servo motor should be set
*/
void setup() 
{
  myservo.attach(11); 
  Serial.begin(9600);
  myservo.write(pos);   
}
/**
* @brief Rotating ldr1 & ldr2
*
* @return state Pin level to which the ldr1 & ldr2 should be set
*/
void loop() 
{
  val1 = analogRead(ldr1);            
  val2 = analogRead(ldr2);
  val1 = map(val1, 0, 1023, 0, 180);     
  val2 = map(val2, 0, 1023, 0, 180);     
  if(val1 > (val2+50))
  {    
    if(pos<180)
     pos=pos+1;
    myservo.write(pos);
    Serial.println("backward");         
    delay(10);         
  }
  else if(val2 > (val1+50))
  {
    if(pos>0)
     pos=pos-1;
    myservo.write(pos);
    Serial.println("forward");         
    delay(10); 
  }
                     
}
