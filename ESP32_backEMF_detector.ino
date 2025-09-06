const int emfPin = 35; 
void setup() { 
  Serial.begin(115200);
 
  analogReadResolution(12); 
  analogSetPinAttenuation(emfPin, ADC_11db); 
} 

void loop() { 
  int emfValue = analogRead(emfPin);  

  if (emfValue > 100) { 
    Serial.print("Back EMF detected! Value: ");
    Serial.println(emfValue);
  }

  delay(100); 
}
