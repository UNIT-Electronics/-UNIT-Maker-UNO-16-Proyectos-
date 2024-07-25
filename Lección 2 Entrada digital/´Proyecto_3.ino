/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
 Encendido y apagado de un LED con un botn
 ********************************/
void setup() {
pinMode (13, OUTPUT);
pinMode (2, INPUT_PULLUP);
}
void loop() {
if (digitalRead (2)==LOW) 
{ 
  digitalWrite (13, HIGH);
}
else{
}
digitalWrite(13, LOW);
}