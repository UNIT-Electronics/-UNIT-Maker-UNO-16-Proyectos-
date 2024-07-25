/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
 Encendido de un LED cada 100 milisegundos
 ********************************/
void setup() {
  //Coloque el código de configuracón aquí,
  //para que se ejecute una vez:

  pinMode(13, OUTPUT); 

}

void loop() {
 //Coloque el código principal aquí,
 // para que se ejecute repetidamente:

 digitalWrite(13, HIGH);
 delay(100);
 digitalWrite(13, LOW);
 delay(100);
}