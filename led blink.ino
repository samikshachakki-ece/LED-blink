void setup() {
  pinMode(23, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(23,HIGH);
  delay(1000); 
  Serial.println("HIGH");

  digitalWrite(23, LOW);
  delay(500);
  Serial.println("LOW");
}
