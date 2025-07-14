#define BLYNK_TEMPLATE_ID "TMPL3yRMJNF-Q"
#define BLYNK_TEMPLATE_NAME "EV Telemetry"
#define BLYNK_AUTH_TOKEN "iUgtrt9GE9Vq2HLvokV5L9z62wFmmmiT"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SoftwareSerial.h>
#include <TinyGPS++.h>

// GPS Module connected to D4 (RX), D3 (TX)
SoftwareSerial gpsSerial(D4, D3);
TinyGPSPlus gps;

// Wi-Fi credentials
char ssid[] = "VIVOY28S5G";       // Your Wi-Fi name
char pass[] = "12345678";         // Your Wi-Fi password

BlynkTimer timer;

void sendData() {
  while (gpsSerial.available()) {
    gps.encode(gpsSerial.read());
  }

  if (gps.location.isUpdated()) {
    float latitude = gps.location.lat();
    float longitude = gps.location.lng();

    String gpsString = "Lat: " + String(latitude, 6) + ", Lng: " + String(longitude, 6);
    Blynk.virtualWrite(V3, gpsString);  // Send GPS data to V3
    Serial.println(gpsString);
  }

  // Read battery voltage
  int analogValue = analogRead(A0);
  float voltage = analogValue * (3.3 / 1023.0) * 11; // Voltage divider ratio = 11
  Blynk.virtualWrite(V2, voltage);

  Serial.print("Voltage: ");
  Serial.println(voltage);
}

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(5000L, sendData); // Send every 5 seconds
}

void loop() {
  Blynk.run();
  timer.run();
}