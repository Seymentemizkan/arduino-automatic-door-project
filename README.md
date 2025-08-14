# Automatic Door System

An Arduino-based automatic door system that detects nearby objects using an ultrasonic sensor and controls a servo motor to open and close a door. The system provides visual feedback through an LCD display and audio notification with a buzzer.

## Features

- **Proximity Detection**: Uses an ultrasonic sensor (HC-SR04) to detect objects within 10cm
- **Automated Door Control**: Controls a servo motor to open and close the door
- **Visual Feedback**: Displays door status messages on an LCD screen with scrolling text
- **Audio Notification**: Provides audible alerts when the door opens or closes

## Hardware Requirements

- Arduino board (Uno/Nano/Mega)
- Servo motor
- HC-SR04 ultrasonic distance sensor
- 16x2 LCD display
- Active buzzer
- Jumper wires
- Power supply

## Wiring Connections

- **LCD Display**:
  - RS pin to Arduino pin 8
  - E pin to Arduino pin 7
  - D4 pin to Arduino pin 6
  - D5 pin to Arduino pin 5
  - D6 pin to Arduino pin 4
  - D7 pin to Arduino pin 3

- **Servo Motor**:
  - Signal pin to Arduino pin 10
  
- **Ultrasonic Sensor**:
  - Trigger pin to Arduino pin 13
  - Echo pin to Arduino pin 12
  
- **Buzzer**:
  - Positive pin to Arduino pin 9

## Installation

1. Connect all components according to the wiring guide above
2. Install the required libraries in your Arduino IDE:
   - LiquidCrystal (included in Arduino IDE)
   - Servo (included in Arduino IDE)
3. Download the project code and open it in the Arduino IDE
4. Upload the code to your Arduino board

## How It Works

The system continuously monitors the distance in front of the ultrasonic sensor. When an object comes within 10cm of the sensor:

1. The servo motor moves to the initial position (0°) to open the door
2. The buzzer sounds and "KAPI ACILDI!" (Door Opened) scrolls across the LCD
3. The system waits for 3 seconds
4. The door automatically closes (servo moves to 180°)
5. The buzzer sounds again and "KAPI KAPANDI!" (Door Closed) scrolls across the LCD

## Usage

Once installed and powered, the system works automatically. Simply approach the sensor to trigger the door opening sequence.

## Customization

You can modify the following parameters in the code:
- Servo positions for open/closed door states
- Detection distance threshold (currently 10cm)
- Door open duration (currently 3 seconds)
- Display messages and scroll speed

## Contributing

Contributions to improve the project are welcome. Please feel free to fork the repository and submit pull requests.
