#include <Arduino.h>
#include <Servo.h>

// Creates a servo object to control the motor.
Servo svo_servo;

int pos = 0;    // Stores servo position.

void setup() {
    Serial.begin(9600);

    // Attach the motor to pin 9 on the board.
    svo_servo.attach(9);
}

void loop() {
    // The rotor will go from 0 to 180 degrees.
    for (pos  = 0;  pos <= 180; pos+=2) {   // The iteration expression controls speed.
        svo_servo.write(pos);               // Go to position.
        delay(15);                          // Wait for the servo to reaach position.
    }

    // From 180 to 0 degrees.
    for (pos  = 180;  pos >= 0; pos-=2) {
        svo_servo.write(pos);
        delay(15);
    }
}