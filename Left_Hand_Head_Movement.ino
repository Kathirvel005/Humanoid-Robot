// Left_Hand_Head_Movement.ino
// This file contains routines for controlling the left hand and the head movement.
// Note: In Arduino sketches, all .ino files in the same directory are compiled together,
// sharing global variables and functions.

// Declare head servo
Servo headServo;

// Setup function for the head servo (call this in your main setup() function if needed)
void setupHead() {
  headServo.attach(8); // Attached to digital pin 8
  headServo.write(90);  // Default center position
}

// Function to control the left hand movement (waving)
void waveLeftHand() {
  for(int i = 0; i < 3; i++) {
    leftArm.write(120);
    delay(500);
    leftArm.write(60);
    delay(500);
  }
  leftArm.write(90); // Reset to center/stand position
}

// Function to control head movement (looking left and right)
void moveHead() {
  // Look left
  headServo.write(45);
  delay(1000);
  
  // Look right
  headServo.write(135);
  delay(1000);
  
  // Look center
  headServo.write(90);
  delay(1000);
}
