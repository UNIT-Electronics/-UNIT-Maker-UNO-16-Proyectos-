/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
 Encendido y apagado de un LED de forma automática pero solamente presionando un botón
 ********************************/
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