// This #include statement was automatically added by the Particle IDE.
#include "HCMAX7219.h"

/* FILE:    HCMODU0082_Serial_7_Segment_Module_Example1
   DATE:    19/03/15
   VERSION: 0.2


https://github.com/HobbyComponents/HCMAX7219/blob/master/HCMAX7219.cpp
http://forum.hobbycomponents.com/viewtopic.php?f=58&t=1794
http://blog.hobbycomponents.com/?p=325

REVISIONS:
12/03/15 Created version 0.1
19/03/15 Updated to work with V0.2 of the HCMAX7219 library
This is an example of how to use the Hobby Components serial 8 digit seven 7 
segment display module (HCMODU0082). To use this example sketch you will 
need to download and install the HCMAX7921 library available from the software
section of our support forum (forum.hobbycomponents.com) or on github:
(https://github.com/HobbyComponents)
The library assumes you are using one module. If you have more than one module
connected together then you will need to change the following line in the 
libraries HCMAX7219.h header file to the number of drivers you have connected:
#define NUMBEROFDRIVERS 1 <- Change this number
PINOUT:
MODULE.....UNO/NANO.....MEGA
VCC........+5V..........+5V
GND........GND..........GND
DIN........11...........51
CS (LOAD)..10...........10
CLK........13...........52
You may copy, alter and reuse this code in any way you like, but please leave
reference to HobbyComponents.com in your comments if you redistribute this code.
This software may not be used directly for the purpose of promoting products that
directly compete with Hobby Components Ltd's own range of products.
THIS SOFTWARE IS PROVIDED "AS IS". HOBBY COMPONENTS MAKES NO WARRANTIES, 
WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE, ACCURACY OR
LACK OF NEGLIGENCE. HOBBY COMPONENTS SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE
FOR ANY DAMAGES INCLUDING, BUT NOT LIMITED TO, SPECIAL, INCIDENTAL OR 
CONSEQUENTIAL DAMAGES FOR ANY REASON WHATSOEVER. */

/* Include the HCMAX7219 and SPI library */
//#include "application.h"
#include "Particle.h"
#include "HCMAX7219.h"
//#include "SPI.h"

/* Set the LOAD (CS) digital pin number*/
/*
  DOUT --> D11 --> A5 (MOSI)
  LOAD --> D10 --> A2 (SS)
  CLK  --> D13 --> A3 (SCK)
*/
#define LOAD A2  //CS 10

/* Create an instance of the library */
HCMAX7219 HCMAX7219(LOAD);
//HCMAX7219 HCMAX7219(DIN, CLK, LOAD);

void setup() 
{   
 pinMode(7, OUTPUT); // sets the pin as output
}

/* Main program */
void loop() 
{
  /* Clear the output buffer */
  digitalWrite(7, HIGH);
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("10.112.2",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  delay(2500);
  digitalWrite(7, LOW);  //while(1);
  
  HCMAX7219.Clear();
  HCMAX7219.print7Seg("fan on",8);
  HCMAX7219.Refresh();  
  delay(2500);

  HCMAX7219.Clear();
  HCMAX7219.print7Seg("fan off",8);
  HCMAX7219.Refresh();  
  delay(2500);

  /* OK
  HCMAX7219.Clear();
  HCMAX7219.print7Seg("deg 0C  ",8);
  HCMAX7219.Refresh();  
  delay(2500);
  
  */
  
  /* NOT readable
  HCMAX7219.Clear();
  HCMAX7219.print7Seg("min temp",8);
  HCMAX7219.Refresh();  
  delay(2500);
  
  HCMAX7219.Clear();
  HCMAX7219.print7Seg("max now",8);
  HCMAX7219.Refresh();  
  delay(2500);

  HCMAX7219.Clear();
  HCMAX7219.print7Seg("start up",8);
  HCMAX7219.Refresh();  
  delay(2500);

  HCMAX7219.Clear();
  HCMAX7219.print7Seg("node 1",8);
  HCMAX7219.Refresh();  
  delay(2500);

  HCMAX7219.Clear();
  HCMAX7219.print7Seg("unit 1",8);
  HCMAX7219.Refresh();  
  delay(2500);
  
  */
  
  HCMAX7219.Clear();
  HCMAX7219.print7Seg("NODESENR",8);
  HCMAX7219.Refresh();  
  delay(5000);
  
  HCMAX7219.Clear();
  HCMAX7219.print7Seg("HIGH LOW",8);
  HCMAX7219.Refresh();  
  delay(5000);

  HCMAX7219.Clear();
  HCMAX7219.print7Seg("UP  DOWN",8);
  HCMAX7219.Refresh();  
  delay(5000);


  
}
