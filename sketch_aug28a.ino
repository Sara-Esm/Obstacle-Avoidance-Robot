#include <Servo.h>

// Define motor control pins
const int leftMotorPin1 = 2;   // Connect to motor driver IN1
const int leftMotorPin2 = 3;   // Connect to motor driver IN2
const int rightMotorPin1 = 4;  // Connect to motor driver IN3
const int rightMotorPin2 = 5;  // Connect to motor driver IN4

// Define ultrasonic sensor pins
const int trigPin = 6;  // Connect to ultrasonic sensor trigger pin
const int echoPin = 7;  // Connect to ultrasonic sensor echo pin

// Set maximum distance for obstacle detection (adjust as needed)
const int maxDistance = 30;  // Maximum distance in centimeters

void setup() {
  // Initialize motor control pins as outputs
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);

  // Initialize ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  // Set up serial communication
  Serial.begin(9600);
}

void loop() {
  // Measure distance using the ultrasonic sensor
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Print distance to serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  // Check for obstacles and perform obstacle avoidance
  if (distance <= maxDistance) {
    // Avoid obstacle by turning
    turnRight();  // Adjust turning direction as needed
    delay(500);   // Adjust turning duration as needed
  } else {
    // Move forward
    forward();
  }
}

// Function to move the robot forward
void forward() {
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);
}

// Function to turn the robot right
void turnRight() {
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
  digitalWrite(rightMotorPin1, LOW);
  digitalWrite(rightMotorPin2, HIGH);
}
