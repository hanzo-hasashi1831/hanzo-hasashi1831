const int potPin = 12; // GPIO12 is input only

void setup() {
  Serial.begin(115200);
}

void loop() {
  int potValue = analogRead(potPin); // Read analog value (0–4095)
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  delay(200); // Delay for readability
}
