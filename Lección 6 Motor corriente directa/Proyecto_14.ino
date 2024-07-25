/*
  Derechos de autor © UNIT Electronics
  Este codigo se proporciona "tal cual", sin garantías de ningún tipo.
  Fecha de revisión: 25/07/24
*/
/********************************
Con este programa controlamos la velocidad de un motor mediante un botón 
********************************/ 
int mode=0;
void setup() {
  pinMode (2, INPUT);
  pinMode (5, OUTPUT);
}

void loop() {
  switch (mode) {
    case 0:
      analogWrite (5,0);
      break;
    case 1:
      analogWrite (5,100);
      break;
    case 2:
      analogWrite (5,255);
      break;
    default:
      mode = 0;
      break;
  }

  if (digitalRead (2) ==LOW) {

    while (digitalRead (2) ==LOW); 
      mode++;
      if (mode==3)
        mode=0;
  }
}