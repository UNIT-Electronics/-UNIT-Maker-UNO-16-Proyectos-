/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
 En este proyecto se ira apagado gradual un LED
 ********************************/

int brillo = 60;
void setup() {
  pinMode (5, OUTPUT);
}
void loop() {
  analogWrite (5,brillo); delay (200);
  if (brillo==0) {
    delay(1000);
    brillo=60;

  }
else{
  brillo = brillo - 10;
  }
}