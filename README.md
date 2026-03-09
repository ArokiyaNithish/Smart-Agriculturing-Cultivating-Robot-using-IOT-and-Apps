<div align="center">

# 🌾 Smart Agriculturing Cultivating Robot

### *IoT & Bluetooth-Powered Autonomous Farming Robot for Community Agriculture*

[![Arduino](https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Bluetooth](https://img.shields.io/badge/Bluetooth-HC--05-0082FC?style=for-the-badge&logo=bluetooth&logoColor=white)](https://www.bluetooth.com/)
[![IoT](https://img.shields.io/badge/IoT-Enabled-green?style=for-the-badge&logo=internetofthings&logoColor=white)](https://en.wikipedia.org/wiki/Internet_of_things)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)
[![Open Source](https://img.shields.io/badge/Open%20Source-Contribution%20Welcome-brightgreen?style=for-the-badge&logo=github)](https://github.com/)
[![C++](https://img.shields.io/badge/Language-C%2B%2B%20(Arduino)-blue?style=for-the-badge&logo=cplusplus&logoColor=white)](https://cplusplus.com/)

> 🚜 **A community-focused IoT farming robot** designed to assist farmers in cultivating activities — including seeding, soil moisture checking, water sprinkling, and field navigation — all controlled wirelessly via a Bluetooth mobile app.

</div>

---

## 📋 Table of Contents

- [📌 Problem Statement](#-problem-statement)
- [💡 Solution & Approach](#-solution--approach)
- [🎯 Objectives](#-objectives)
- [🛠️ Technology Stack](#️-technology-stack)
- [🔧 Hardware Requirements](#-hardware-requirements)
- [💻 Software Requirements](#-software-requirements)
- [📁 Project Structure](#-project-structure)
- [⚙️ System Architecture & Block Diagram](#️-system-architecture--block-diagram)
- [🔄 System Flowchart](#-system-flowchart)
- [🔬 How It Works](#-how-it-works)
- [📟 Bluetooth Command Reference](#-bluetooth-command-reference)
- [🔍 Code Analysis](#-code-analysis)
- [🚀 Installation & Setup](#-installation--setup)
- [📱 Mobile App Usage](#-mobile-app-usage)
- [🌍 Impact & Real-World Significance](#-impact--real-world-significance)
- [🖼️ Prototype & Demo](#️-prototype--demo)
- [🚀 Future Enhancements](#-future-enhancements)
- [🤝 Open Source Contribution](#-open-source-contribution)
- [📄 License](#-license)
- [👨‍💻 Author & Acknowledgments](#-author--acknowledgments)
- [📚 References](#-references)

---

## 📌 Problem Statement

> **"Farming is the backbone of India, yet farmers remain burdened with labor-intensive, time-consuming, and physically demanding cultivating tasks."**

### Background

Agriculture employs over **58% of India's rural population**, yet Indian farmers face severe challenges:
- **Shortage of agricultural labor** — rural workforce is migrating to urban jobs
- **High cost of manual farming** — labor expenses consume large portions of farm income
- **Physical strain on farmers** — repetitive tasks like seeding and watering lead to health issues
- **Inefficient irrigation** — over-watering or under-watering due to lack of soil moisture monitoring
- **Inaccessible technology** — expensive farming machinery not affordable for small-scale farmers

### The Core Problem

| Challenge | Description |
|-----------|-------------|
| 🔴 **Labor Shortage** | Reduced agricultural workforce makes cultivating labor-intensive and expensive |
| 🔴 **Inefficient Irrigation** | Farmers cannot accurately judge soil moisture — leads to water wastage or crop failure |
| 🔴 **Manual Seeding** | Manual seed dispersion is slow, inconsistent, and physically taxing |
| 🔴 **Limited Surveillance** | Farmers cannot monitor large fields remotely or efficiently |
| 🔴 **High Equipment Cost** | Commercial farming robots are too expensive for small/marginal farmers |
| 🔴 **Weather & Crop Risk** | Without real-time field data, farmers cannot react quickly to crop stress |

### Problem Statement

> *"Design and implement a low-cost, Bluetooth-controlled agricultural cultivating robot that assists farmers in performing seeding, soil moisture monitoring, water sprinkling, and field navigation — remotely operated via a mobile phone app — making smart farming accessible to the farming community."*

---

## 💡 Solution & Approach

### Our Strategy

We built a **multi-function IoT agricultural robot** that places smart farming tools in the farmer's hands:

1. **Bluetooth Mobile Control → HC-05 Module** connected to Arduino UNO for wireless operation
2. **Autonomous Navigation → DC Motors + L298N Motor Driver** for field movement (Forward, Backward, Left, Right, Stop)
3. **Soil Moisture Monitoring → Servo Motor (Servo2)** that actuates a soil moisture sensor probe into the ground
4. **Water Sprinkling → Relay-controlled Sprinkler (Pin 13)** for automated irrigation
5. **Seed Dispensing → Servo Motor (Servo3) + Relay (Pin 3)** seeder mechanism for field seeding
6. **Cultivating Arm → Servo Motor (Servo1)** for soil tilling/cultivating actions during forward movement

### Architecture Overview

```
Mobile Phone (Bluetooth App)
        ↓ [Bluetooth Signal]
   [HC-05 Bluetooth Module]
        ↓ [Serial Communication @ 9600 baud]
   [Arduino UNO Microcontroller]
        ↓ [GPIO Pins]
   ┌────┬───────┬──────────┬──────────┐
   ↓    ↓       ↓          ↓          ↓
[DC  [Servo1][Servo2    [Servo3   [Relay
Motors][Tiller][Moisture  ][Seeder] ][Sprinkler]
+L298N]       Probe]
```

---

## 🎯 Objectives

- ✅ **Build a Bluetooth-controlled robot** operable via smartphone without internet dependency
- ✅ **Automate seeding** with a servo-driven seed dispenser mechanism
- ✅ **Enable real-time soil moisture checking** by actuating a probe sensor into the soil
- ✅ **Provide automated water sprinkling** through a relay-controlled pump/sprinkler
- ✅ **Support field navigation** — Forward, Backward, Left, Right, and Stop commands
- ✅ **Make smart farming affordable** — built from low-cost, widely available IoT components
- ✅ **Empower farming communities** through surveillance and survey capabilities in rural fields
- ✅ **Open-source the design** so any community, student, or farmer can replicate or improve it

---

## 🛠️ Technology Stack

| Layer | Technology | Version/Model | Purpose |
|-------|-----------|--------------|---------|
| **Microcontroller** | Arduino UNO | Rev3 | Central control unit for all operations |
| **Communication** | HC-05 Bluetooth Module | v2.0+EDR | Wireless mobile-to-robot communication |
| **Motor Driver** | L298N H-Bridge | — | Controls DC wheel motors (direction & speed) |
| **Actuators** | Servo Motors (SG90/MG90S) | 3× units | Tiller arm, soil probe, seed dispenser |
| **Irrigation** | Relay Module + Water Pump | 5V Relay | Activates/deactivates sprinkler system |
| **Seeding** | Relay + Servo Mechanism | — | Opens/closes seed dispenser gate |
| **Programming Language** | C++ (Arduino IDE) | 1.8.x / 2.x | Firmware development |
| **Mobile App** | Bluetooth RC Controller | Android | User interface for robot commands |
| **Power Supply** | LiPo Battery / 12V DC | — | Powers Arduino, motors, and peripherals |
| **Framework** | Arduino Servo Library | Built-in | Servo motor control abstraction |

---

## 🔧 Hardware Requirements

| # | Component | Specification | Quantity | Purpose |
|---|-----------|--------------|----------|---------|
| 1 | **Arduino UNO** | ATmega328P, 16 MHz | 1 | Main microcontroller |
| 2 | **HC-05 Bluetooth Module** | 2.4 GHz, UART, 9600 baud | 1 | Wireless Bluetooth communication |
| 3 | **L298N Motor Driver** | Dual H-Bridge, 2A per channel | 1 | DC motor direction control |
| 4 | **DC Gear Motors** | 6V–12V, 100–300 RPM | 2–4 | Wheel drive for locomotion |
| 5 | **SG90 / MG90S Servo Motor** | 180° rotation, 5V | 3 | Tiller arm, soil probe, seed dispenser |
| 6 | **5V Relay Module** | Single-channel, optocoupler | 2 | Switch for sprinkler and seeder |
| 7 | **Water Pump / Sprinkler** | Mini submersible / spray nozzle | 1 | Water spraying/irrigation |
| 8 | **Soil Moisture Sensor** | Capacitive or Resistive | 1 | Soil humidity detection |
| 9 | **Robot Chassis** | 4-wheel plastic/acrylic frame | 1 | Physical body/frame of robot |
| 10 | **Wheels & Caster** | Plastic wheels + ball caster | 4+1 | Mobility on field terrain |
| 11 | **LiPo Battery / 12V DC** | 7.4V–12V, ≥2000mAh | 1 | Power supply for entire system |
| 12 | **Jumper Wires** | Male-to-Male / Male-to-Female | As needed | Electrical connections |
| 13 | **Breadboard** | 830-point | 1 | Prototyping & connections |
| 14 | **USB Cable (Type-B)** | Arduino programming cable | 1 | Program upload to Arduino |
| 15 | **Seed Container/Hopper** | Plastic container | 1 | Stores seeds for dispensing |
| 16 | **Android Smartphone** | Android 4.4+, Bluetooth 2.0+ | 1 | Remote control via app |

---

## 💻 Software Requirements

| # | Software/Tool | Version | Platform | Purpose |
|---|--------------|---------|----------|---------|
| 1 | **Arduino IDE** | 1.8.x or 2.x | Windows/Mac/Linux | Code editing, compiling, uploading firmware |
| 2 | **Arduino Servo Library** | Built-in | Arduino IDE | Servo motor control |
| 3 | **Bluetooth RC Controller App** | Latest | Android (Play Store) | Mobile Bluetooth remote control |
| 4 | **HC-05 Configuration Tool** | AT Command via Serial Monitor | Arduino IDE | Bluetooth module pairing setup |
| 5 | **C++ (Arduino Flavor)** | Arduino 1.8+ | Arduino IDE | Programming language for firmware |
| 6 | **Android Bluetooth App** | ArduinoBlueControl / Custom | Android 4.4+ | Sending command characters to robot |
| 7 | **Git** | 2.x+ | Windows/Mac/Linux | Version control & open-source contribution |

---

## 📁 Project Structure

```
Smart-Agriculturing-Cultivating-Robot/
│
├── 📄 Bluetooth_agriculture_car.ino         # Main Arduino firmware (all logic)
├── 📄 README.md                             # This documentation file
├── 📄 requirements.txt                      # Hardware & software requirements list
│
├── 📁 docs/
│   ├── Report Smart Agriculturing Cultivating Robot.pdf   # Full project report
│   └── Final Review - Smart Agriculturing Cultivating Robot.pdf # Presentation slides
│
├── 📁 images/
│   └── Prototype of Smart Agriculturing Cultivating Robot.jpg  # Working prototype photo
│
└── 📁 circuit/
    └── block_diagram.png                    # System block diagram (see report)
```

---

## ⚙️ System Architecture & Block Diagram

```
┌─────────────────────────────────────────────────────────┐
│                   SYSTEM BLOCK DIAGRAM                  │
│                                                         │
│  ┌──────────────┐       ┌─────────────────────────────┐ │
│  │ Android Phone │──────▶│   HC-05 Bluetooth Module   │ │
│  │  (Bluetooth   │       │  (RX/TX → Arduino Pin 0/1) │ │
│  │   App/RC Ctrl)│       └────────────┬────────────────┘ │
│  └──────────────┘                    │                  │
│                              Serial (9600 baud)         │
│                                      │                  │
│                          ┌───────────▼──────────────┐   │
│                          │     ARDUINO UNO           │   │
│                          │  (ATmega328P @ 16 MHz)    │   │
│                          └──┬────┬────┬────┬────┬───┘   │
│                             │    │    │    │    │        │
│                    ┌────────┘ ┌──┘ ┌──┘ ┌──┘ ┌──┘       │
│                    ▼          ▼    ▼    ▼    ▼           │
│              ┌──────────┐ ┌──────┐┌──────┐┌──────┐      │
│              │  L298N   │ │Servo1││Servo2││Servo3│      │
│              │  Motor   │ │Tiller││Soil  ││Seeder│      │
│              │  Driver  │ │ Arm  ││Probe ││      │      │
│              └────┬─────┘ └──────┘└──────┘└──────┘      │
│                   │                                      │
│            ┌─────▼──────┐   ┌──────────┐ ┌──────────┐  │
│            │  DC Wheel  │   │  Relay   │ │  Relay   │  │
│            │   Motors   │   │Sprinkler │ │  Seeder  │  │
│            │ (4-wheel   │   │ (Pin 13) │ │  (Pin 3) │  │
│            │  drive)    │   └────┬─────┘ └────┬─────┘  │
│            └────────────┘        │              │        │
│                              ┌───▼───┐     ┌───▼───┐   │
│                              │ Water │     │ Seed  │   │
│                              │ Pump/ │     │Hopper/│   │
│                              │Sprink │     │Dispen │   │
│                              └───────┘     └───────┘   │
└─────────────────────────────────────────────────────────┘
```

---

## 🔄 System Flowchart

```
                        ┌─────────────────┐
                        │   START / BOOT  │
                        │  Arduino Powers │
                        │       ON        │
                        └────────┬────────┘
                                 │
                        ┌────────▼────────┐
                        │   SETUP():      │
                        │ • Serial.begin  │
                        │   (9600 baud)   │
                        │ • Attach Servos │
                        │ • Set Pin Modes │
                        │ • Init Positions│
                        └────────┬────────┘
                                 │
                    ┌────────────▼──────────────┐
                    │        LOOP():            │
                    │  Wait for Bluetooth Input │
                    └────────────┬──────────────┘
                                 │
                    ┌────────────▼──────────────┐
                 NO │  Serial.available() > 0?  │ YES
              ┌─────┤  (Data received from app) ├─────┐
              │     └───────────────────────────┘     │
              │                                        │
         (Wait)                              ┌─────────▼──────────┐
              │                              │  Read char input   │
              │                              │ from Serial buffer │
              │                              └─────────┬──────────┘
              │                                        │
              │                    ┌───────────────────┼───────────────────┐
              │                    │                   │                   │
              │              ┌─────▼──────┐     ┌──────▼─────┐    ┌───────▼──────┐
              │              │  Movement  │     │ Irrigation │    │   Seeding    │
              │              │  Commands  │     │  Commands  │    │  Commands    │
              │              │            │     │            │    │              │
              │              │ F-Forward  │     │  W-Spray   │    │  V-Dispense  │
              │              │ B-Backward │     │  w-Stop    │    │  v-Retract   │
              │              │ R-Right    │     │  Sprinkler │    │  Seed Gate   │
              │              │ L-Left     │     └──────┬─────┘    └───────┬──────┘
              │              │ G-Fwd-Rgt  │            │                  │
              │              │ I-Fwd-Lft  │     ┌──────▼─────┐    ┌───────▼──────┐
              │              │ S-Stop     │     │ Relay ON/  │    │  Servo3 +    │
              │              └─────┬──────┘     │ Relay OFF  │    │  Relay3      │
              │                    │            └────────────┘    │  Actuate     │
              │              ┌─────▼──────┐                       └─────────────┘
              │              │  L298N +   │
              │              │ Servo1 Arm │         ┌──────────────────────┐
              │              │  Control   │         │  Soil Moisture (U/u) │
              │              └────────────┘         │  Servo2 probe into   │
              │                    │                │  ground / retract    │
              │          ┌─────────▼───────────┐    └──────────────────────┘
              └─────────▶│  Return to LOOP()   │
                         │  Await next command │
                         └─────────────────────┘
```
---

## 🔄 System Art Flowchart
<img width="647" height="551" alt="Screenshot 2026-03-01 220333" src="https://github.com/user-attachments/assets/fcd0ee82-6ecb-4f5d-bc4f-be6dcd1d63e3" />


---

## 🔬 How It Works

### Step 1 — Initialization (Setup)

On power-up, the Arduino runs `setup()`:
- Opens Serial port at **9600 baud** for HC-05 Bluetooth communication
- Attaches **Servo1** (Pin 4), **Servo2** (Pin 7), **Servo3** (Pin 8)
- Configures motor driver pins (9, 10, 11, 12) and relay pins (3, 13) as **OUTPUT**
- Sets initial positions: Sprinkler relay HIGH (OFF), Servo1 sweeps 90°→0° (tiller init), Servo2 at 25° (raised), Servo3 at 0° (closed)

---

### Step 2 — Bluetooth Command Reception

The HC-05 module receives single-character commands from the Android app over Bluetooth and passes them to Arduino via Serial:

```cpp
if (Serial.available() > 0) {
    char inputvalue = char(Serial.read());
    // Process command character...
}
```

---

### Step 3 — Navigation Control (DC Motors via L298N)

Motor direction is controlled by setting HIGH/LOW on L298N input pins:

```cpp
// Forward
digitalWrite(12, HIGH);  // Motor A forward
digitalWrite(11, LOW);
digitalWrite(10, HIGH);  // Motor B forward
digitalWrite(9, LOW);
// Also actuates Servo1 (tiller arm) for cultivating during forward movement
servo1.write(15);
```

---

### Step 4 — Soil Moisture Monitoring

Servo2 actuates the soil moisture sensor probe into the ground when triggered:

```cpp
// Lower probe (U command)
servo2.write(5);   // Probe into ground

// Retract probe (u command)
servo2.write(25);  // Lift probe out of soil
```

---

### Step 5 — Water Sprinkling

Relay on Pin 13 controls the water pump/sprinkler:

```cpp
// Sprinkler ON (W command)
digitalWrite(sprikler, LOW);   // Relay active LOW → Pump ON

// Sprinkler OFF (w command)
digitalWrite(sprikler, HIGH);  // Relay inactive → Pump OFF
```

---

### Step 6 — Seed Dispensing

Servo3 + Relay on Pin 3 together operate the seed dispenser:

```cpp
// Open seed gate (V command)
digitalWrite(3, LOW);           // Activate seeder mechanism
for (i = 0; i < 30; i++) {
    servo3.write(i);            // Gradually open dispenser
    delay(10);
}

// Close seed gate (v command)
digitalWrite(3, HIGH);          // Deactivate seeder
for (i = 30; i > 0; i--) {
    servo3.write(i);            // Gradually close dispenser
    delay(10);
}
```

---

## 📟 Bluetooth Command Reference

| Command Char | Function | Action |
|-------------|----------|--------|
| `F` | **Forward** | Move forward + Tiller arm activates (Servo1) |
| `B` | **Backward** | Move backward |
| `R` | **Turn Right** | Right-side motors reverse |
| `L` | **Turn Left** | Left-side motors reverse |
| `G` | **Forward-Right** | Front-right diagonal movement |
| `I` | **Forward-Left** | Front-left diagonal movement |
| `S` | **Stop** | All motors off |
| `W` | **Sprinkler ON** | Activates water pump via relay |
| `w` | **Sprinkler OFF** | Deactivates water pump |
| `U` | **Soil Probe DOWN** | Lowers Servo2 to insert moisture sensor |
| `u` | **Soil Probe UP** | Raises Servo2 to retract moisture sensor |
| `V` | **Seed Dispense** | Opens seed gate + Servo3 rotates (dispense seeds) |
| `v` | **Seed Stop** | Closes seed gate + Servo3 returns to closed position |

---

## 🔍 Code Analysis

### Design Decisions

| Decision | Rationale |
|----------|-----------|
| **HC-05 @ 9600 baud** | Standard reliable rate for Bluetooth UART; compatible across most Android apps |
| **Servo for tiller arm** | Provides precise angular control; allows phased movement during forward cultivation |
| **Relay for sprinkler** | Safely isolates high-current pump circuit from Arduino 5V logic |
| **Servo2 for soil probe** | Mechanical actuation ensures repeatable sensor depth for consistent readings |
| **Servo3 for seed dispenser** | Gradual 0°–30° sweep ensures controlled seed release; prevents seed jamming |
| **Active-LOW relay logic** | Standard for commonly used 5V relay modules; HIGH = OFF, LOW = ON |
| **Single `.ino` file** | Arduino platform convention for embedded C++; all logic in one firmware sketch |
| **Char-based commands** | Simple single-byte Bluetooth protocol; compatible with any RC Bluetooth Android app |

### Pin Mapping Summary

```
Arduino UNO Pin Layout:
┌──────────────────────────────────────────────────┐
│ Pin  │ Component        │ Direction │ Function    │
│──────┼──────────────────┼───────────┼─────────────│
│  0   │ HC-05 TX → RX   │  INPUT    │ Bluetooth RX│
│  1   │ HC-05 RX ← TX   │  OUTPUT   │ Bluetooth TX│
│  3   │ Relay (Seeder)   │  OUTPUT   │ Seed gate   │
│  4   │ Servo1 (Tiller)  │  OUTPUT   │ Cultivate   │
│  7   │ Servo2 (Probe)   │  OUTPUT   │ Soil sensor │
│  8   │ Servo3 (Seeder)  │  OUTPUT   │ Seed disp.  │
│  9   │ L298N - IN4      │  OUTPUT   │ Motor B dir │
│ 10   │ L298N - IN3      │  OUTPUT   │ Motor B dir │
│ 11   │ L298N - IN2      │  OUTPUT   │ Motor A dir │
│ 12   │ L298N - IN1      │  OUTPUT   │ Motor A dir │
│ 13   │ Relay (Sprinkler)│  OUTPUT   │ Water pump  │
└──────────────────────────────────────────────────┘
```

### Script Dependency Map

```
Farmer → Bluetooth Android App
      ↓ (Single char commands over BT)
HC-05 Module → Arduino Serial
      ↓ (Serial.read())
Bluetooth_agriculture_car.ino
      ├── 'F'/'B'/'R'/'L'/'G'/'I'/'S' → L298N → DC Motors + Servo1
      ├── 'W'/'w'                      → Relay Pin 13 → Water Pump
      ├── 'U'/'u'                      → Servo2 → Soil Probe
      └── 'V'/'v'                      → Relay Pin 3 + Servo3 → Seed Dispenser
```

---

## 🚀 Installation & Setup

### Prerequisites

- Arduino UNO board
- Arduino IDE (v1.8.x or v2.x)
- HC-05 Bluetooth Module (paired to Android phone)
- Assembled robot chassis with all components wired per the block diagram
- Android smartphone with a Bluetooth RC Controller app

### 1. Clone the Repository

```bash
git clone https://github.com/ArokiyaNithish/Smart-Agriculturing-Cultivating-Robot.git
cd Smart-Agriculturing-Cultivating-Robot
```

### 2. Open Firmware in Arduino IDE

```
File → Open → Bluetooth_agriculture_car.ino
```

### 3. Install Required Library

The `Servo.h` library is included by default in Arduino IDE. No additional libraries needed.

```
Arduino IDE → Tools → Manage Libraries → Search "Servo" → Confirm installed
```

### 4. Select Board & Port

```
Tools → Board → Arduino UNO
Tools → Port → Select the COM port for your Arduino
```

### 5. Upload Firmware

```
Click the Upload (→) button or press Ctrl+U
```

### 6. Pair HC-05 with Android

1. Power on the robot
2. On Android, go to **Settings → Bluetooth → Scan**
3. Find **HC-05** and pair using default PIN: `1234` or `0000`

### 7. Connect Bluetooth App

1. Install **"Bluetooth RC Controller"** from Google Play Store
2. Open the app → Connect to **HC-05**
3. Configure buttons to send the [command characters](#-bluetooth-command-reference)

### 8. Wire Components

Follow the [Pin Mapping Summary](#pin-mapping-summary) above to connect:
- L298N motor driver (Pins 9, 10, 11, 12)
- Servo1 → Pin 4, Servo2 → Pin 7, Servo3 → Pin 8
- Relay (Sprinkler) → Pin 13, Relay (Seeder) → Pin 3
- HC-05 TX → Arduino Pin 0 (RX), HC-05 RX → Arduino Pin 1 (TX)

---

## 📱 Mobile App Usage

### How to Control the Robot

1. **Open** the Bluetooth RC Controller app on Android
2. **Connect** to HC-05 paired device
3. Use **directional buttons** to navigate the robot around the field
4. Press the **Sprinkler button** (mapped to `W`) to water the crop
5. Press the **Seed button** (mapped to `V`) to begin seed dispensing
6. Press **Soil Probe button** (mapped to `U`) to lower the moisture sensor
7. Read moisture level from sensor indicator
8. Press **Stop** (`S`) to halt all movement

### App Configuration (Button → Command Mapping)

| App Button | Character to Send | Robot Action |
|-----------|------------------|--------------|
| ↑ Forward | `F` | Drive forward + till soil |
| ↓ Backward | `B` | Drive backward |
| → Right | `R` | Turn right |
| ← Left | `L` | Turn left |
| ⏹ Stop | `S` | Full stop |
| 💧 Spray | `W` | Sprinkler ON |
| ⏹ Spray Off | `w` | Sprinkler OFF |
| 🌱 Seed | `V` | Seed dispenser open |
| ⏹ Seed Off | `v` | Seed dispenser close |
| 📏 Probe In | `U` | Insert soil moisture probe |
| 📏 Probe Out | `u` | Retract soil moisture probe |

---

## 🌍 Impact & Real-World Significance

### Agricultural & Social Impact

- 🌾 **Labor Shortage Solution** — Reduces dependence on physical farmhands for repeated tasks
- 💸 **Cost-Effective Farming** — Built from ~₹2,000–5,000 in components, far cheaper than commercial agri-robots
- 🌊 **Water Conservation** — Targeted sprinkler use based on soil moisture data prevents over-irrigation
- 🌱 **Precision Seeding** — Consistent seed dispensing reduces seed waste and improves germination spacing
- 👨‍🌾 **Community Service** — Designed as a public/community project to benefit small and marginal farmers
- 📡 **Survey & Surveillance** — Robot can be driven through fields for crop health monitoring

### Why This Matters

| Stakeholder | Benefit |
|-------------|---------|
| **Small Farmers** | Affordable automation for routine cultivating tasks |
| **Agricultural Communities** | Shared robot model for cooperative farming |
| **Students & Makers** | Open-source platform for IoT + robotics learning |
| **Government Bodies** | Demonstrates low-cost precision agriculture for rural programs |
| **Environment** | Reduced water waste through moisture-based irrigation targeting |

### System Advantages Over Manual Farming

| Manual Farming | This IoT Robot |
|---------------|----------------|
| Physically demanding, labor-intensive | **Remote wireless control from safe distance** |
| Inconsistent irrigation (over/under) | **Sensor-based moisture checking before watering** |
| Slow manual seeding row by row | **Servo-actuated automated seed dispensing** |
| Single-person field walkthrough | **Robot-based field survey with mobile monitoring** |
| High farmhand labor costs | **One-time low-cost build; reusable every season** |

---

## 🖼️ Prototype & Demo

### Working Prototype Image

![Prototype of Smart Agriculturing Cultivating Robot](https://github.com/user-attachments/assets/baf74846-606c-402e-a164-656f8b301cf2)

### Working Prototype (Demo Video)



https://github.com/user-attachments/assets/ded7a4c8-c9a0-46b8-aa36-271d0246864f





> 📷 *The working prototype of the Smart Agriculturing Cultivating Robot, showing the assembled chassis with Arduino UNO, HC-05 Bluetooth module, servo motors, and relay-controlled sprinkler system.*


---

## 🚀 Future Enhancements

- [ ] **GPS Navigation** — Add GPS module (NEO-6M) for autonomous waypoint-based field traversal
- [ ] **Soil pH Sensor** — Integrate pH sensor to measure soil acidity/alkalinity for fertilizer guidance
- [ ] **Camera Module** — Add ESP32-CAM for live video feed of the field during surveillance
- [ ] **Wi-Fi Control** — Upgrade from Bluetooth (HC-05) to Wi-Fi (ESP8266/ESP32) for longer range
- [ ] **Solar Power** — Add solar panel for self-sustaining power in remote fields
- [ ] **Mobile App (Custom)** — Develop a dedicated Android/iOS app with live sensor dashboard
- [ ] **Auto-Navigation** — Line-following IR sensors for autonomous row-by-row field navigation
- [ ] **Weather Integration** — Connect to weather API (via NodeMCU/ESP32) to auto-schedule irrigation
- [ ] **Cloud Dashboard** — Store sensor readings to IoT cloud (ThingSpeak / Blynk / AWS IoT)
- [ ] **Multi-Robot Swarm** — Deploy multiple units collaboratively for large-scale fields
- [ ] **Voice Control** — Integrate voice commands via Google Assistant / Amazon Alexa

---

## 🤝 Open Source Contribution

We warmly welcome contributions from the open-source community! Whether it's **hardware improvements**, **new features**, **bug fixes**, **documentation**, or **mobile app development** — every contribution helps farmers!

### How to Contribute

```bash
# 1. Fork the repository on GitHub

# 2. Clone your fork
git clone https://github.com/YOUR_USERNAME/Smart-Agriculturing-Cultivating-Robot.git
cd Smart-Agriculturing-Cultivating-Robot

# 3. Create a feature branch
git checkout -b feature/your-feature-name

# 4. Make your changes and commit
git add .
git commit -m "feat: add GPS autonomous navigation module"

# 5. Push to your fork
git push origin feature/your-feature-name

# 6. Open a Pull Request on GitHub → main branch
```

### Contribution Areas

| Area | Good First Issue? | Description |
|------|-----------------|-------------|
| 🐛 **Bug Fixes** | ✅ Yes | Fix servo sweep timing, edge case handling in commands |
| 📱 **Mobile App** | ✅ Yes | Build a dedicated Bluetooth app with GUI dashboard |
| 📡 **New Sensors** | ✅ Yes | Add temperature, humidity, pH sensor support |
| 🗺️ **Navigation** | ⚡ Medium | Implement line-following or GPS-based pathing |
| ☀️ **Solar Power** | ⚡ Medium | Design solar charging circuit for battery |
| 🌐 **Wi-Fi Upgrade** | ⚡ Medium | Port from HC-05 Bluetooth to ESP8266 Wi-Fi |
| ☁️ **Cloud Dashboard** | 🔥 Advanced | Integrate ThingSpeak / Blynk for sensor data logging |
| 🤖 **Autonomous Mode** | 🔥 Advanced | Implement obstacle avoidance with ultrasonic sensors |
| 📖 **Documentation** | ✅ Yes | Improve wiring diagrams, assembly guide, tutorials |
| 🧪 **Hardware Testing** | ✅ Yes | Test on different terrain types (paddy fields, dry soil) |

### Coding Standards

- Follow **Arduino Style Guide** — clear variable names, comment all functions
- Use **meaningful commit messages** (use [Conventional Commits](https://www.conventionalcommits.org/))
- Add **hardware connection diagrams** for any new components added
- Test your changes on hardware before submitting Pull Request
- Reference any issue number in your PR description

### Reporting Issues

Please use [GitHub Issues](https://github.com/ArokiyaNithish/Smart-Agriculturing-Cultivating-Robot/issues) to:
- 🐛 Report bugs or hardware compatibility issues
- 💡 Request new features or sensor integrations
- ❓ Ask questions about wiring, programming, or setup

---

## 📄 License

This project is licensed under the **Apache License, Version 2.0** — you are free to use, modify, distribute, and build upon this design for educational, personal, or community agricultural purposes with attribution.

```
You are free to use, modify, and distribute this project for educational,
personal, commercial, or community agricultural purposes, subject to the
terms of the Apache License 2.0.

This license also provides an express grant of patent rights from contributors
to users and protects users from patent litigation.
```

See the [LICENSE](LICENSE) file for full license details.

---

## 👨‍💻 Author & Acknowledgments

### Author

**Arokiya Nithish J**
- Role : IOT Hardware Developer and Hardware Designer
- 🎓 B.E. / B.Tech — Electronics & Communication / Computer Science Engineering
- 📅 Project Year: 2025
- 💼 Domain: IoT | Embedded Systems | Robotics | Smart Agriculture
- 🌾 Project Type: Community Farmer Service Project (Public Good / Open Source)

**Contacts**
- GitHub: [@ArokiyaNithish](https://github.com/ArokiyaNithish)
- LinkedIn: [@Arokiya Nithish J](https://www.linkedin.com/in/arokiya-nithishj/)
- Email: arokiyanithishj@gmail.com
- Portfolio: [arokiyanithish.github.io/portfolio/](https://arokiyanithish.github.io/portfolio/)

### Acknowledgments

- 👨‍🌾 **Farming Communities of India** — The real inspiration for building this accessible, affordable solution
- ⚙️ **Arduino Community** — For the open-source platform that makes embedded development accessible to all
- 📡 **HC-05 / Bluetooth Module Community** — For extensive documentation and examples
- 🌐 **Open-Source IoT Community** — For shared knowledge on motor drivers, relay circuits, and servo control
- 🏫 **Academic Institution & Guide** — For providing the opportunity and resources to build and test the prototype

---

## 📚 References

1. [Arduino UNO — Official Documentation](https://www.arduino.cc/en/Guide/ArduinoUno)
2. [Arduino Servo Library Reference](https://www.arduino.cc/reference/en/libraries/servo/)
3. [HC-05 Bluetooth Module Datasheet & AT Commands](https://components101.com/wireless/hc-05-bluetooth-module)
4. [L298N Motor Driver — Datasheet & Usage Guide](https://components101.com/modules/l298n-motor-driver-module)
5. [Relay Module with Arduino — Arduino Project Hub](https://projecthub.arduino.cc/)
6. [SG90 Servo Motor Datasheet](https://components101.com/motors/servo-motor-basics-pinout-datasheet)
7. [IoT-Based Smart Irrigation Systems — IEEE Research](https://ieeexplore.ieee.org/)
8. [Smart Agriculture using IoT — Research Overview](https://www.researchgate.net/)
9. [Bluetooth RC Controller App — Google Play Store](https://play.google.com/store/apps)

---

<div align="center">

For support, email arokiyanithishj@gmail.com or create an issue in the GitHub repository.

### 🌟 If this project helped you or your community — please give it a ⭐ Star on GitHub!

**#SmartAgriculture #IoT #Arduino #Bluetooth #FarmingRobot #OpenSource #CommunityFarming #EmbeddedSystems**

*Made with ❤️ and Arduino C++ by Arokiya Nithish — For the Farming Community of India* 🌾

*Copyright 2025 Arokiya Nithish J*

*This project is licensed under the Apache License, Version 2.0.*

</div>




