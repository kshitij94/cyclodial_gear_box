#include <AccelStepper.h>
const int dirPin = 2;
const int stepPin = 3;

// 1 = Driver interface (Step/Dir pins)
AccelStepper stepper(1, stepPin, dirPin); 

void setup() {
  stepper.setMaxSpeed(1000);    // Try starting here (250us total delay equivalent)
  stepper.setSpeed(-400); // Ramps up the speed so it doesn't stall
}

void loop() {
  //stepper.runSpeed();
}