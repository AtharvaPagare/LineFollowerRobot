# LineFollowerRobot

The goal of this project is to create an autonomous robot that follows white line on black surface. 
This repository contains the code for Line Follower Robot. 
The code is written in Arduino environment.
The components required for building the bot are:

a. Sensors to diffrentiate between black and white lines. The sensor used by me is TCRT5000 which consists of Infrared emitter and phototransistor. 
b. Microcontroller (Arduino Mega used in this case).
c. Motors (2 Johnson geared 300 RPM motors used in this case).
d. Motor Driver to control the speed of the motors (L298N Module used in this case).
e. 11.1V Lithium Polymer Battery.
f. Various Electronic Components (Voltage Regulator - IC 7805, Jumper wires, pins etc.)
  
# Sensor

As mentioned above, IR emitter and phototransistor is used as sensor. Photodiode can also be used but the main disadvadvantage of this sensor is that it very sensitive to light intensity in the surroundings. Hence usage of IR emitter and phototransistor is recommended.
The data sheet for TCRT5000 sensor is available here - https://www.vishay.com/docs/83760/tcrt5000.pdf.


# Microcontroller

Any microcontroller capable of constantly gathering analog data from the above sensor can be used. As I have used 7 senors grid, I have used Arduino Mega (which consists of 16 analog slots). Arduino Uno or any custom made microcontroller will also do.


# Motor Driver

The motor driver should be selected such that it can handle the amount of current demanded by the motors. Because of Johnson geared motors, I used L298N module. Another option is L293D.
The data sheet for L298N motor driver is available here - https://www.sparkfun.com/datasheets/Robotics/L298_H_Bridge.pdf
The data sheet for L293D motor driver is available here - https://www.arduino.cc/documents/datasheets/H-bridge_motor_driver.PDF

# Circuit Connections

The input to the regulator is taken from the VCC and GND pins of the motor driver. The 5V output cable is connected to the microcontroller circuit.
The IC 7805 converts the input supply to 5V DC supply.

