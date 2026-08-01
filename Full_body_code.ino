#include <Servo.h>

Servo leftArm;
Servo rightArm;
Servo leftLeg;
Servo rightLeg;
Servo leftFoot;
Servo rightFoot;

int pos = 90;

void setup() {
  leftArm.attach(2);
  rightArm.attach(3);
  leftLeg.attach(4);
  rightLeg.attach(5);
  leftFoot.attach(6);
  rightFoot.attach(7);

  // Initialize head servo (defined in Left_Hand_Head_Movement.ino)
  setupHead();

  standPosition();
}

void loop() {
  // Wave right hand (defined in Right_Hand_Movement.ino)
  waveRightHand();
  delay(2000);

  // Raise right arm (defined in Right_Hand_Movement.ino)
  raiseRightArm();
  delay(2000);

  // Wave left hand (defined in Left_Hand_Head_Movement.ino)
  waveLeftHand();
  delay(2000);

  // Move head (defined in Left_Hand_Head_Movement.ino)
  moveHead();
  delay(2000);

  // Walk forward (defined in this file)
  walkForward();
  delay(2000);
}


void standPosition() {
  leftArm.write(90);
  rightArm.write(90);
  leftLeg.write(90);
  rightLeg.write(90);
  leftFoot.write(90);
  rightFoot.write(90);
}

void walkForward() {
  leftLeg.write(70);
  rightLeg.write(110);
  delay(500);

  leftFoot.write(80);
  rightFoot.write(100);
  delay(500);

  leftLeg.write(110);
  rightLeg.write(70);
  delay(500);

  leftFoot.write(100);
  rightFoot.write(80);
  delay(500);

  standPosition();
}