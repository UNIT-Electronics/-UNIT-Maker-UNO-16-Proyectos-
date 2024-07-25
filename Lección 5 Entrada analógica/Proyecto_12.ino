/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
Programamos la lectura de un sensor infrarrojo para detectar líneas negras 
********************************/ 
int irValue;
void setup() {
  Serial.begin(9600); pinMode (3, OUTPUT);
}

void loop() {
  Serial.println(analogRead (A0)); irValue = analogRead (A0);
  if (irValue > 500) {
    digitalWrite (3,HIGH); delay (200);
  }
else{
  digitalWrite(3, LOW);
  delay (200);
  }
}