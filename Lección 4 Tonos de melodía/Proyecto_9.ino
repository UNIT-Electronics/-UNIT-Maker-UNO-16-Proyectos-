#include "pitches.h"
// notas de la melodia:
int melody[] = {
    NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE G3, 0, NOTE B3, NOTE_C4
};

// note durations: 4 =
int noteDurations [] = {
    4, 8, 8, 4, 4, 4, 4, 4
}




void setup() {
    /*iterar sobre las notas de la melodía:*/ 
    for (int thisNote = 0; thisNote < 8; thisNote++){
        /* Para calcular la duración de la nota, tome un segundo dividido por el tipo de nota.*/ 
        int noteDuration = 1000 / note Durations [thisNote];
        tone (8, melody [thisNote], noteDuration);
        // Para distinguir las notas, establezca un tiempo mínimo entre ellas.
// la duración de la nota + 30% parece funcionar bien:
        int pauseBetweenNotes = noteDuration * 1.30;
        delay (pauseBetweenNotes);
        //detener la reproducción del tono:
        noTone (8);
    }
}
void loop() {
//No es necesario repetir la melodía
}