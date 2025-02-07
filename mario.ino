#include "pitches.h"

// Define the buzzer pin
#define BUZZER 8  

// Notes of the Super Mario theme
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7, 0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0, NOTE_G6, 0, 0, 0,
  NOTE_C7, 0, 0, NOTE_G6, 0, 0, NOTE_E6, 0, 0,
  NOTE_A6, 0, NOTE_B6, 0, NOTE_AS6, NOTE_A6, 0,
  NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7, 0, NOTE_F7, NOTE_G7, 0,
  NOTE_E7, 0, NOTE_C7, NOTE_D7, NOTE_B6, 0, 0
};

// Note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  12, 12, 12, 12, 12, 12, 12, 12,
  12, 12, 12, 12, 12, 12, 12, 12,
  12, 12, 12, 12, 12, 12, 12, 12,
  12, 12, 12, 12, 12, 12, 12,
  12, 12, 12, 12, 12, 12, 12,
  12, 12, 12, 12, 12, 12, 12
};

void setup() {
  for (int i = 0; i < 45; i++) {
    int noteDuration = 1000 / noteDurations[i];
    tone(BUZZER, melody[i], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(BUZZER);
  }
}

void loop() {
  // Empty loop
}
