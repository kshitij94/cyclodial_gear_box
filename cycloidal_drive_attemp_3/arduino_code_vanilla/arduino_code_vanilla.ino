#include <AccelStepper.h>

// Define pin connections & motor's steps per revolution
const int dirPin = 2;
const int stepPin = 3;
int enable = 1;
void setup() {
  delay(1000);
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  digitalWrite(dirPin, HIGH);
  delay(1000);

}

void loop() {
  if (enable == 0) {
    return;
  }

    for (int i = 0; i < 200; i++) {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(500);
    }

        for (int i = 0; i < 200; i++) {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(500);
    }

}
