#include <Stepper.h>

const int MOTOR_STEPS=2048;

Stepper myStepper(MOTOR_STEPS,8,10,9,11);

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(512);

  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

  delay(500);
}
