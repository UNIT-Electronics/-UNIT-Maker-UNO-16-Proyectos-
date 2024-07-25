/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
 Encendido y apagado de un LED con un botn
 ********************************/
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