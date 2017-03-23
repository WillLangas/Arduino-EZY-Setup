# EZY Setup  
A short set of Arduino files to quickly set up multiple components in a short amount of time.

#Functions
Various functions exist in the program in order to accomplish several tasks
Here are the functions and what they do:

Array Setup:
Function: arraySetup(lowestPin, highestPin)
What it does: This function uses two inputs (The lowest pin in use and the highest pin in use) and uses a loop to set all of them to outputs quickly and efficiently
  
Blink Test:
Function: arrayBlinkTest(lowestPin, highestPin)
What it does: This function goes through the LEDs or other components, one by one, and blinks them for a quarter of a second
  
All On:
Function: arrayAllOn(lowestPin, highestPin)
What it does: This function simply goes through all the components and turns them all on, until they are turned off using the arrayAllOff function 
  
All Off:
Function: arrayAllOff(lowestPin, highestPin)
What it does: This function does the opposite of arrayAllOn, and just turns off all the components in the array
  
Flash:
Function: arrayFlash(lowestPin, highestPin)
What it does: This function uses a series of nested loops in order to turn all the components on and off 100 times

Motor Setup:
Function: motorSetup(lowestPin, highestPin)
What it does: Goes from the lowest Pin to the highest pin and sets each pin as an output

Motor Test:
motorTest(lowestPin, highestPin)
What it does: Turns every motor on, one by one, for a short period of time

Motor All Off:
Function: motorAllOff(lowestPin, highestPin)
What it does: Turns each motor off in succesion from the lowest to the highest pin 

#Technicalities 
- Make sure the serial monitor has been started before using the functions, as many of them output text to the monitor
- Make sure to put integers in the parameters of the functions for the lowest and highest pins being used
- All of the functions must be defined in the program, I am currently working on making a library with them 
- For the motor setup functions, all pins must have PWM. These pins are marked with, "~" on the Arduino board
