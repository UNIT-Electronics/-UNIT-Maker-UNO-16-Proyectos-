/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
Programa que realiza la lectura del sensor ultrasónico e imprime la distancia del objeto enfrente 
********************************/ 
long duration;
int distance;
void setup(){
  pinMode (11,OUTPUT);
  pinMode (12, INPUT);
  Serial.begin(9600);
}
Programa que realiza la lectura del sensor ultrasonico e imprime la distancia del obje enfrente de el 

void loop() {
  digitalWrite(11,LOW); 
  delayMicroseconds (2);
  digitalWrite(11,HIGH);
  delayMicroseconds (10);
  digitalWrite(11, LOW);
  duration = pulseIn (12, HIGH); 
  distance = duration*0.034/2; 
  delay (50);
  Serial.print ("Distance =");
  Serial.print (distance);
  Serial.println("cm");
}