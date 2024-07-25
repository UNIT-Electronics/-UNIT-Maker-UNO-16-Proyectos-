/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
Muestra el valor analógico en el monitor en serie 
 ********************************/ 
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println (analogRead(A0));
  delay(1000);
}