/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
 En este proyecto se programa tonos básicos en el UNO para que
salgan por medio de un buzzer
 ********************************/ 
void setup() {
  pinMode (8,OUTPUT);
}

void loop() {
  tone (8,262,250); delay (325);
  tone (8,294, 250); delay (325);
  tone (8,330, 250); delay (325);
  tone (8,349, 250);
  delay (325);
  tone (8,392, 250);
  delay (325);
  tone (8,440, 250);
  delay (325);
  tone (8,494, 250);
  delay (325);
  tone (8,523, 250); delay(1000);
  delay(1000);
}