// Right_Hand_Movement.ino
// This file contains routines for controlling the right hand/arm movement.
// Note: In Arduino sketches, all .ino files in the same directory are compiled together,
// sharing global variables and functions.

// Function to control the right hand movement (waving)
void waveRightHand() {
  for(int i = 0; i < 3; i++) {
    rightArm.write(60);
    delay(500);
    rightArm.write(120);
    delay(500);
  }
  rightArm.write(90); // Reset to center/stand position
}

// Function to raise the right arm (pointing or signaling)
void raiseRightArm() {
  rightArm.write(180); // Raise arm straight up
  delay(1500);
  rightArm.write(90);  // Reset to center/stand position
}
