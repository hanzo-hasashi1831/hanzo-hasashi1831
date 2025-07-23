// Diode Signal Detector on ESP32
const int signalPin = 25; // Pin connected after diode

void setup() {
  Serial.begin(115200);
  pinMode(signalPin, INPUT); // Set pin as input
}

void loop() {
  int signalState = digitalRead(signalPin); // Read digital level

  if (signalState == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (safe).");
  }

  delay(500); // Read every 0.5 seconds
}
