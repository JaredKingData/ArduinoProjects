/*1. Wiring:

Connect the stepper motor to the Arduino as follows:
Stepper Motor Pin 1 (e.g., A+ or Red wire): Connect to digital pin 8 on the Arduino.
Stepper Motor Pin 2 (e.g., A- or Blue wire): Connect to digital pin 9 on the Arduino.
Stepper Motor Pin 3 (e.g., B+ or Green wire): Connect to digital pin 10 on the Arduino.
Stepper Motor Pin 4 (e.g., B- or Black wire): Connect to digital pin 11 on the Arduino.
If your stepper motor has more than four wires, consult the motor's datasheet or documentation to determine the correct wiring configuration.


2. Programming:

To control the stepper motor, you'll need to use a stepper motor library. The most commonly used library is the "Stepper" library, which comes pre-installed with the Arduino IDE.
Open the Arduino IDE on your computer.
Create a new sketch (File > New).
Copy and paste the following example code into the Arduino IDE:*/

#include <Stepper.h>

// Define the number of steps per revolution for your stepper motor
const int stepsPerRevolution = 200;  // Change this value according to your motor's specifications

// Create an instance of the Stepper class
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);  // Change the pin numbers if you've connected the motor to different pins

void setup() {
  // Set the speed of the stepper motor (in RPM)
  myStepper.setSpeed(60);  // Change this value to adjust the speed of your motor
}

void loop() {
  // Step the motor one step in one direction
  myStepper.step(stepsPerRevolution);

  // Add a delay to control the speed of the motor
  delay(500);  // Change this value to adjust the delay between steps
}
