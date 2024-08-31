# leaser-security-system
I made leaser security system with the help of a leaser module, a LDR module and busser module. With the esp32 board
Creating a laser security system using an ESP32 board is a great project for home security or as a learning experience in IoT and electronics. Below is an overview of the components you'll need, a brief explanation of the setup, and some example code to get you started.

Components Required:
ESP32 Board: The main microcontroller for processing data.
Laser Module: To act as the laser beam that will be interrupted by an intruder.
LDR (Light Dependent Resistor): To detect the laser beam.
Resistors: Typically 10kΩ for the voltage divider with the LDR.
Breadboard and Jumper Wires: For connecting components.
Power Supply: USB cable or battery to power the ESP32.
Setup:
Connect the LDR:

One terminal of the LDR is connected to a 3.3V pin on the ESP32.
The other terminal of the LDR is connected to an analog input pin on the ESP32 (e.g., GPIO 34) and also to ground via a 10kΩ resistor, forming a voltage divider.
Connect the Laser Module:

Connect the laser module to a digital pin on the ESP32 (e.g., GPIO 25) to control its power.
The other terminals of the laser module are connected to the ground and 3.3V power.
Power the ESP32:

Ensure the ESP32 is powered via USB or an appropriate battery.
