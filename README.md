🚦 Traffic Light (Arduino)

A simple traffic light simulation controlled by a button, built with Arduino UNO.

📋 Description

This project simulates a basic traffic light system at an intersection.

By default, one road has a green light, the other has a red light.

When the button is pressed, the sequence is triggered:

Transition state (green → yellow → red).

Final state (lights swapped between roads).

Return to the initial state.

The code is provided in the file traffic_light.ino.

🛠️ Hardware

Arduino UNO (or compatible)

6 LEDs (2 × red, 2 × yellow, 2 × green)

6 × 220–330 Ω resistors (one for each LED)

1 push button (4-pin tact switch)

Breadboard + jumper wires

⚡️ Pinout
Arduino Pin	Light
2	Green A
3	Yellow A
4	Red A
5	Green B
6	Yellow B
7	Red B
8	Button (to GND, INPUT_PULLUP)

Each LED must be connected in series with a resistor.

▶️ How to Run

Open the project in Arduino IDE.

Upload traffic_light.ino to the Arduino board.

Wire the LEDs and button according to the pinout table above.

After startup:

Default: A = green, B = red.

Press the button → the lights go through the transition (yellow, red, swap).

🔄 Code Logic

Functions in the sketch:

start_state() – initial state (A green, B red).

temporary_state_from_green_to_red() – transition from green to red (yellow + red).

final_state() – final state (A red, B green).

temporary_state_from_red_to_green() – transition back to green.

Delays are defined in milliseconds using delay().

📖 Example Behavior

Power on:

Road A → green,

Road B → red.

When button pressed:

Road A → yellow,

short “all red” state,

Road B → green.

After a set time, the system returns to the initial state.
