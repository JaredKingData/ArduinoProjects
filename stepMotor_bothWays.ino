#include <Stepper.h>

// Define the number of steps per revolution for your stepper motor
const int stepsPerRevolution = 200;  // Change this value according to your motor's specifications

// Create an instance of the Stepper class
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);  // Change the pin numbers if you've connected the motor to different pins

// Define a boolean variable to track the direction of movement
bool clockwise = true;

void setup() {
  // Set the speed of the stepper motor (in RPM)
  myStepper.setSpeed(60);  // Change this value to adjust the speed of your motor
}

void loop() {
  // Move the motor in the current direction
  if (clockwise) {
    myStepper.step(stepsPerRevolution); // Rotate clockwise
  } else {
    myStepper.step(-stepsPerRevolution); // Rotate counterclockwise
  }

  // Toggle the direction for the next movement
  clockwise = !clockwise;

  // Add a delay to control the speed of the motor
  delay(1000);  // Change this value to adjust the delay between steps
}

