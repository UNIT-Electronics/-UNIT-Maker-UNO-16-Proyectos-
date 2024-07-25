void setup() {

pinMode (4, OUTPUT);
pinMode (3, INPUT);
}
void loop() {

  if (digitalRead(3) ==LOW) 
  {
    digitalWrite (4, HIGH);
  }

else if (digitalRead(3)==HIGH) 
  { 
    digitalWrite(4, LOW);
  }
}