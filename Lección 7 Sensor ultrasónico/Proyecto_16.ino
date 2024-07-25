/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
Programa que manda una alerta sonora a medida que se va acercando a un objeto 
********************************/ 
long duration;
int distance; void setup() {
  pinMode (8,OUTPUT); 
  pinMode (11, OUTPUT); 
  pinMode (12, INPUT);
}

void loop() {
  ultrasonic();
  if (distance<2) { 
      tone (8,349);
  }
  else{
    tone (8,349);
    delay (50);
    noTone (8);
    delay(distance*10);
  }
}  
void ultrasonic() {
  digitalWrite(11, LOW);
  delayMicroseconds (2);
  digitalWrite(11,HIGH);
  delayMicroseconds (10);
  digitalWrite(11, LOW);
  duration = pulseIn (12, HIGH); 
  distance = duration *0.034/2; 
  delay (50);
}