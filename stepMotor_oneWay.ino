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
