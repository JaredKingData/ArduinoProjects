/*Wiring:

Connect the ultrasonic sensor to your Arduino MEGA2560 R3 as follows:

VCC: Connect to 5V pin on the Arduino.
GND: Connect to GND pin on the Arduino.
TRIG: Connect to any digital pin (e.g., digital pin 7).
ECHO: Connect to any digital pin (e.g., digital pin 6).
Make sure to double-check the pinout of your specific ultrasonic sensor as it may vary depending on the manufacturer.


Programming:
*/
// Define pins
#define TRIG_PIN 7
#define ECHO_PIN 6

// Define constants
const float SPEED_OF_SOUND = 343.0; // Speed of sound in m/s

// Variables
long duration; // Time taken for ultrasonic pulse to travel back and forth
float distance; // Distance measured in meters

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  pinMode(TRIG_PIN, OUTPUT); // Set TRIG_PIN as output
  pinMode(ECHO_PIN, INPUT); // Set ECHO_PIN as input
}

void loop() {
  // Send a 10us pulse to trigger the ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Measure the duration of the pulse from the ECHO_PIN
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate distance based on the duration
  distance = (duration * SPEED_OF_SOUND) / (2 * 10000); // Convert duration to meters
  
  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" millimeters");
  
  delay(50); // Wait for a second before next measurement
}
