void setup() {
pinMode (4, OUTPUT);
pinMode (3, INPUT);
}
void loop() {
if (digitalRead (3)==LOW) 
{ 
  while(1){
  digitalWrite (4, HIGH);
  delay(200);
  digitalWrite (4, LOW);
  delay(200);
  }
  digitalWrite (13, HIGH);
}
  else digitalWrite(5, LOW);
}