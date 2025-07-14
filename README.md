# ⚡ Smart EV Telemetry System Using NodeMCU, GPS & Blynk IoT

This project demonstrates a real-time telemetry system for electric vehicles using **NodeMCU (ESP8266)** and the **Blynk IoT platform**. It continuously monitors and transmits **GPS location** and **battery voltage** of an electric two-wheeler, displaying live data on a mobile dashboard via **Blynk.cloud**.

---

## 🎯 Objectives

- Monitor the vehicle’s **live GPS location**
- Read and transmit **battery voltage** in real time
- Display data on a smartphone using the **Blynk IoT app**
- Provide a scalable base for EV fleet monitoring or tracking systems

---

## 🔧 Features

- 📍 **Live GPS Tracking** (Latitude + Longitude)
- 🔋 **Battery Voltage Monitoring**
- 📲 **Dashboard View in Blynk Mobile App**
- 🌐 **Wi-Fi-based IoT Communication**
- 🔁 Expandable: Add speed, temperature, alerts

---

## 🛠️ Hardware Components

| Component             | Description                           |
|------------------------|---------------------------------------|
| NodeMCU ESP8266        | Wi-Fi-enabled microcontroller         |
| NEO-6M GPS Module      | For real-time vehicle location        |
| Voltage Sensor (25V)   | To read EV battery voltage            |
| Jumper Wires, Breadboard | For connections and prototyping     |
| Smartphone (with Blynk IoT) | To monitor live data remotely  |

---

## 🧠 Technologies Used

- ESP8266 (NodeMCU)
- GPS (NEO-6M)
- Voltage Sensor
- Blynk.cloud (Blynk IoT Platform)
- Arduino IDE (Embedded C)
- Virtual Pins & Datastreams

---

## 📲 Blynk IoT Dashboard Setup

**Blynk Template Setup:**
- Hardware: ESP8266
- Connection: Wi-Fi
- Datastreams:
  - `V1`: Location (GPS)
  - `V2`: Voltage (Decimal)

**Mobile Dashboard Widgets:**
- GPS Location widget (linked to V1)
- Gauge or Label (linked to V2)

---
## 📐 Circuit Diagram

Below is the hardware setup for long-range telemetry using the E32 LoRa module and ESP32.
 EV Node: ESP32 collects sensor data (voltage, location)
 LoRa Module (E32): Transmits data wirelessly
 Raspberry Pi: Receives and displays the data
![Circuit Diagram] (ev_circuit_diagram.png)


## 📝 License

This project is licensed under the [MIT License](LICENSE)

---

## 🙋‍♀️ Author

**Kavya Godugupally**  
[linkedin.com/in/kavya-godugupally-b09688268](https://linkedin.com/in/kavya-godugupally-b09688268)
