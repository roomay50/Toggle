# Toggle an LED Using a Push Button On Arduino

This project demonstrates how to use a push button as a toggle switch with an Arduino.

Instead of the LED turning on only while the button is held down, each button press changes the LED state:

* First press turns the LED ON
* Second press turns the LED OFF
* Subsequent presses continue to toggle the LED state

## Components Used

* Arduino Uno
* momentary tactile Push button
* Red LED
* 1 Resistor (330 ohms)
* Breadboard
* Jumper wires

## How It Works

The Arduino continuously reads the state of the push button. When a valid button press is detected, the program changes the current LED state. If the LED is OFF, it turns ON. If it is ON, it turns OFF.

This project is useful for understanding:

* Digital inputs
* Conditional statements
* State management
* Basic embedded systems programming

## Learning Outcome

While building this project, I reinforced my understanding of button input handling and the difference between assignment (`=`) and comparison (`==`) operators in conditional statements.

## Author

Rosemary Agala Bassey
