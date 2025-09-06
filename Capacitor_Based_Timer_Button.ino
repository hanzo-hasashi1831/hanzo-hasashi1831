
const int capPin = 32; 

void setup() {
  Serial.begin(115200);
  
  analogReadResolution(12);          
  analogSetPinAttenuation(capPin, ADC_11db); 
}

void loop() {
  int capValue = analogRead(capPin); 
  
  Serial.print("Capacitor Voltage Reading: ");
  Serial.println(capValue);

  delay(200); 
}
