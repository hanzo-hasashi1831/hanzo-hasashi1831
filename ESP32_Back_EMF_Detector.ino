// ESP32 Back EMF Detector
const int emfPin = 35; // Analog pin (ADC1 channel) connected to voltage divider

void setup() {
  Serial.begin(115200);
  delay(1000); // Give time for Serial Monitor to start
  analogReadResolution(12); // Set ADC resolution to 12 bits (0-4095)
}

void loop() {
  int emfValue = analogRead(emfPin); // Read analog value from EMF pin

  if (emfValue > 100) { // Threshold to avoid noise
    Serial.print("Back EMF detected! Value: ");
    Serial.println(emfValue);
  }

  delay(100); // Small delay to prevent spamming the Serial Monitor
}
