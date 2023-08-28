# Obstacle Avoidance Robot

![Robot](images/robot.jpg)

An Arduino-based robot that autonomously navigates, avoiding obstacles using ultrasonic sensors. This project demonstrates the integration of Arduino programming, motor control, and obstacle detection.

## Table of Contents
- [Project Overview](#project-overview)
- [Hardware Setup](#hardware-setup)
- [Software Implementation](#software-implementation)
- [Usage Instructions](#usage-instructions)
- [License](#license)

## Project Overview
The "Obstacle Avoidance Robot" project showcases the capabilities of Arduino programming combined with hardware components to create an intelligent robot. The robot uses ultrasonic sensors to detect obstacles in its environment and employs an obstacle avoidance algorithm to navigate around them.

## Hardware Setup
- Arduino Uno R3 board
- Ultrasonic sensor (HC-SR04)
- Wheeled robot platform (chassis, motors, wheels)
- Motor drivers (L298N) for controlling motors
- Breadboard and jumper wires for prototyping

## Software Implementation
The `obstacle_avoidance_robot.ino` file contains the Arduino code responsible for controlling the robot's movements and obstacle avoidance behavior. The code reads data from the ultrasonic sensor and adjusts the robot's movement accordingly.

## Usage Instructions

1. Clone or download this repository to your local machine.
2. Connect the components as described in the "Hardware Setup" section.
3. Upload the `obstacle_avoidance_robot.ino` code to your Arduino Uno R3 board using the Arduino IDE.
4. Power up the robot and place obstacles in its path.
5. Observe how the robot autonomously navigates around obstacles.

## License
This project is licensed under the [MIT License](LICENSE).


