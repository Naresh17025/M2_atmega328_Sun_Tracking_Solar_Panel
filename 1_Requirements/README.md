# REQUIREMENTS
# Hardware Requirements:-
* a) Ram 2GB or higher.
* b) Minimum 250GB hard disk space.
* c) Intel/AMD powered system.
* d) Processor speed 2.0 GHZ or higher

# Software Requirements: -
* a) Windows 7 or higher versions, Linux- Ubuntu v18.04.4 or higher version.
* b) Visual Studio, ATMEL Studio 7(powered by visual studio power shell), Audrino IDE
* c) Simul IDE_1.0.0 RC2.
# COMPONENTS AND SUPPLIES
* Solar panel
* ATmega328 Micro Controller
* Light Dependent Resistor (LDR) x 2
* 10KΩ x 3
* Servo Motor
* 16MHz Crystal
* 22pF Ceramic Capacitors x 2
* Connecting Wires
# AUTOMATED SUN TRACKING SOLAR PANEL CIRCUIT DESIGN
The ATmega328 microcontroller, solar panel, light dependent resistors, and servo motor are all part of the proposed system.
# ATMEGA328 MICROCONTROLLER
The ATmega328 is a microcontroller from the AVR family. It's built on a cutting-edge RISC architecture. It's a controller with an 8-bit resolution. There are 32K bytes of Programmable Flash memory, 1K bytes of EEPROM, and 2K bytes of SRAM in this device. There are 23 programmable I/O pins on this board. Two 8-bit timers, one 16-bit timer, 6 channel ADC with 10-bit precision, programmable USART, Serial Peripheral Interface, 2 wire serial interface (I2C), and other peripheral functions are supported.
# SOLAR PANEL
The solar panel is mounted on a piece of cardboard (for demonstration purposes only), with the bottom of the cardboard linked to the servo motor. A solar panel is made up of photovoltaic cells that are placed in a certain arrangement. A solar cell is the same as a photovoltaic cell. The semiconductor substance silicon is used to make solar cells.
When a beam of light from the Sun strikes the solar cell, it absorbs a little quantity of energy. The absorbed energy is sufficient for electrons inside the atom to leap from one orbit to the next. The electrons in cells are directed by one or more electric fields, which produce current. These cells may be used to generate energy by putting metal contacts on them.
# LDR
LDRs (Light Dependent Resistors) are resistors whose resistance levels are proportional to the intensity of the light. The resistance value falls as the intensity of light shining on the LDR rises. LDR has the most resistance in the dark. The LDR will produce an analogue value that must be converted to a digital value. This may be accomplished with the help of an analogue to digital converter.
Internally, the ATmega328 features an analogue to digital converter. ADC0 to ADC5 (Pins 23–28) are the six ADC channels. Individual 10K resistors are used to link the two LDRs to ADC pins 27 and 28 in a voltage divider arrangement. The sequential approximation approach is used to convert ADC.
# SERVO MOTOR
The panel is rotated by a servo motor. A PWM signal must be sent to the servo motor's control pin in order to operate it, therefore Pin 17 (which contains PWM) is linked to the servo motor's control pin.
You may store the energy created by the solar cells by attaching a battery to the solar panel, and then utilise it when needed. Separate charge controller circuits are dedicated to efficiently controlling and charging the charge obtained from solar panels.
# HIGH LEVEL REQUIREMENTS
| ID | Description | Status |
| ---|:------------|:-------|
| HL1 | LDR INTERFACING WITH ATMEGA328 | IMPLEMENTED |
| HL2 | SERVO MOTOR INTERFACING | IMPLEMENTED |
# LOW LEVEL REQUIREMENTS
| ID | Description | Status |
| ---|:------------|:-------|
| HL1-LL1 | ABLE TO DETECT THE INTENSITY OF LIGHT WITH LDR | IMPLEMENTED |
| HL1-LL2 | LDR INTERFACING WITH ATMEGA328 | IMPLEMENTED |
| HL2-LL1 | LDR1>LDR2 ITS ROTATE RIGHT & LDR2>LDR1 ITS ROTATE LEFT | IMPLEMENTED |
| HL2-LL2 | SERVO MOTOR ROTATES THE PANNEL POSITION | IMPLEMENTED |
# 4W & H (WHO,WHAT,WHEN,WHERE,HOW)
# WHO
 * sun tracking solar panel is mostly used by many of the organisations all around.
# WHAT
* solar tracker, a system that positions an object at an angle relative to the Sun. The most-common applications for solar trackers are positioning photovoltaic (PV) panels (solar panels) so that they remain perpendicular to the Sun's rays and positioning space telescopes so that they can determine the Sun's direction.
# WHEN
* it can be used all the time.
# WHERE
* These panels can be used to power the traffic lights and streetlights.
  These can be used in home to power the appliances using solar power.
 These can be used in industries as more energy can be saved by rotating the panel.
# HOW
* PV solar trackers adjust the direction that a solar panel is facing according to the position of the Sun in the sky. By keeping the panel perpendicular to the Sun, more sunlight strikes the solar panel, less light is reflected, and more energy is absorbed. That energy can be converted into power.

