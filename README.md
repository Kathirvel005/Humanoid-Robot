# Humanoid Robot Control System

An Arduino-based control system for a 7-DOF (Degrees of Freedom) humanoid robot. This project coordinates complex multi-joint movements, including walking, arm waving, and head movement, using modular and clean code.

---

## 🚀 Features

* **7 Degrees of Freedom (DOF)**: Separate servo controls for Head, Left/Right Arms, Left/Right Legs, and Left/Right Feet.
* **Modular Codebase**: Movement routines are split into specialized modules for easier customization and debugging.
* **Pre-configured Sequences**:
  * Default standing calibration
  * Right/Left arm waving & signaling
  * Head rotation (left, right, and center)
  * Walk forward gait sequence

---

## 🛠️ Hardware Requirements

1. **Microcontroller**: Arduino Uno, Nano, or Mega.
2. **Actuators**: 7x Servo Motors (e.g., SG90 or MG996R).
3. **Power Source**: External 5V/6V DC power supply (minimum 2A recommended to power all 7 servos simultaneously).
4. **Misc**: Breadboard, jumper wires, and a common ground connection.

---

## 🔌 Pin Configuration & Wiring

### Pin Mapping

| Component | Arduino Pin | Description |
|:---|:---|:---|
| **Left Arm** | D2 | Left arm wave/gesture control |
| **Right Arm** | D3 | Right arm wave/gesture control |
| **Left Leg** | D4 | Left hip/leg pivot control |
| **Right Leg** | D5 | Right hip/leg pivot control |
| **Left Foot** | D6 | Left ankle/foot stability control |
| **Right Foot** | D7 | Right ankle/foot stability control |
| **Head Servo** | D8 | Head pan/tilt rotation control |

### Schematics

For visual wiring instructions, refer to the included schematics in this repository:
* **[Full Body Circuit](servo_connection_diagram.png)**: Shows all 7 servos, the Arduino, and external battery connections.
* **[Single Servo Reference](full_body_circuit_diagram.png)**: Standard pinout color reference (Signal, Power, Ground).

> ⚠️ **IMPORTANT**: Do not power the servo motors directly from the Arduino's 5V pin, as this can damage your microcontroller. Always use an external power supply and connect its ground pin to the Arduino GND for a common reference.

---

## 📂 Project Structure

* **`Full_body_code.ino`**: Main controller sketch initializing setups, calibrations, and the primary looping sequence.
* **`Left_Hand_Head_Movement.ino`**: Contains control logic for left arm waving and head rotation.
* **`Right_Hand_Movement.ino`**: Contains control logic for right arm waving and raising.

---

## 💻 Setup and Usage

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Kathirvel005/Humanoid-Robot.git
   ```
2. **Open in Arduino IDE**:
   * Open the `Full_body_code.ino` file. The Arduino IDE will automatically open the other `.ino` files as tabs.
3. **Upload the Code**:
   * Connect your Arduino to your computer.
   * Select your board type and port from the **Tools** menu.
   * Press **Upload** (Ctrl + U).
