# IoT-Based Water Tank Monitoring System

## 📌 Project Overview

The IoT-Based Water Tank Monitoring System is an embedded electronics project designed to monitor the water level inside a tank using an ultrasonic sensor.

The system uses an Arduino UNO to measure the distance between the sensor and the water surface and displays the water-level information on an I2C LCD.

## 🎯 Objectives

* Monitor water level automatically
* Reduce water overflow
* Display real-time water-level information
* Provide an affordable embedded solution
* Demonstrate sensor interfacing with a microcontroller

## 🔧 Components Used

* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* 16×2 I2C LCD
* Buzzer/LED
* Jumper Wires
* Breadboard
* Power Supply

## 💻 Software Used

* Arduino IDE
* Embedded C/C++
* Git
* GitHub

## ⚙️ Working Principle

The HC-SR04 ultrasonic sensor sends an ultrasonic pulse toward the water surface.

The Arduino measures the time taken for the echo to return and calculates the distance.

The measured water-level information is then displayed on the LCD.

## 🔌 System Block Diagram

```text
        Water Tank
            ↓
     HC-SR04 Sensor
            ↓
       Arduino UNO
            ↓
    ┌───────┴───────┐
    ↓               ↓
 LCD Display     Buzzer/LED
```

## 📂 Project Structure

```text
IoT-Water-Tank-Monitoring/
│
├── Arduino_Code/
├── Circuit_Diagram/
├── Images/
├── Documentation/
└── README.md
```

## 📊 Result

The system successfully detects the distance between the ultrasonic sensor and water surface and displays the measured value on the LCD.

## 🚀 Future Improvements

* ESP32 integration
* Wi-Fi connectivity
* Mobile application
* Cloud monitoring
* Automatic water pump control
* MQTT-based communication

## 👨‍💻 Author

Yash Ingle

Electronics & Communication Engineering
