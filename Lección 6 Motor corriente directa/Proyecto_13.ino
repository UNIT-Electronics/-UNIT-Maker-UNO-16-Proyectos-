/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
Es un programa que al oprimir un botón la velocidad de un motor aumenta o disminuye a media velocidad
********************************/ 
void setup() { 
  pinMode (2, INPUT); 
  pinMode (5, OUTPUT);
}
void loop() {
  if(digitalRead (2)==LOW) {
    while (1) {
      analogWrite (5,255);
      delay (3000);
      analogWrite (5,80);
      delay (3000);
    }
  }
  else digitalWrite (3, LOW);
}