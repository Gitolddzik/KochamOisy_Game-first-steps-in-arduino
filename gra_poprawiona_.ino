#include <LiquidCrystal_I2C.h>

#include <Wire.h>

#include "pitches.h"
 ////////////////////////////////////
#define REST 0

//Do naprawy 
//Bugowanie sie custom charow po wlaczeniu



  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //1
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //5
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //9
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //13
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_FS3,
  -16,
  NOTE_D3,
  -16,
  NOTE_B2,
  -16,
  NOTE_A3,
  -16,
  NOTE_FS3,
  -16,
  NOTE_B2,
  -16,
  NOTE_D3,
  -16,
  NOTE_FS3,
  -16,
  NOTE_A3,
  -16,
  NOTE_FS3,
  -16,
  NOTE_D3,
  -16,
  NOTE_B2,
  -16,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //17
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //21
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G4,
  -16,
  NOTE_B4,
  -16,

  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8, //25
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_E3,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  -2,

  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8, //29
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_E3,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_C4,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //33
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //37
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS4,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_B3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8, //41
  NOTE_A3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_G3,
  8,
  NOTE_CS3,
  8,
  NOTE_CS3,
  8,
  NOTE_GS3,
  8,
  NOTE_A3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_B3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_A3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_G3,
  8,
  NOTE_B2,
  8,
  NOTE_B2,
  8,
  NOTE_F3,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //45
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_E4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G4,
  -16,
  NOTE_B4,
  -16,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //49
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //53
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_FS3,
  -16,
  NOTE_DS3,
  -16,
  NOTE_B2,
  -16,
  NOTE_FS3,
  -16,
  NOTE_DS3,
  -16,
  NOTE_B2,
  -16,
  NOTE_G3,
  -16,
  NOTE_D3,
  -16,
  NOTE_B2,
  -16,
  NOTE_DS4,
  -16,
  NOTE_DS3,
  -16,
  NOTE_B2,
  -16,

  // -/-

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //57
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //61
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_G4,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_D4,
  -16,
  NOTE_E4,
  -16,
  NOTE_G4,
  -16,
  NOTE_E4,
  -16,
  NOTE_G3,
  -16,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //65
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8, //69
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_DS3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_E3,
  8,
  NOTE_F3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_G3,
  8,
  NOTE_A2,
  8,
  NOTE_A2,
  8,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,
  NOTE_C4,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_A3,
  -16,
  NOTE_F3,
  -16,
  NOTE_D3,
  -16,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //73
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //77
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //81
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  -2,

  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8, //73
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_AS2,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B2,
  8,
  NOTE_C3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_E3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_D3,
  8,
  NOTE_E2,
  8,
  NOTE_E2,
  8,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
  NOTE_B2,
  -16,
  NOTE_E3,
  -16,
  NOTE_G3,
  -16,
  NOTE_C4,
  -16,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_B3,
  -16,
  NOTE_G3,
  -16,
  NOTE_E3,
  -16,
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

int thisNote = 0;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
int melody2[] = {
  NOTE_FS5,
  NOTE_FS5,
  NOTE_D5,
  NOTE_B4,
  NOTE_B4,
  NOTE_E5,
  NOTE_E5,
  NOTE_E5,
  NOTE_GS5,
  NOTE_GS5,
  NOTE_A5,
  NOTE_B5,
  NOTE_A5,
  NOTE_A5,
  NOTE_A5,
  NOTE_E5,
  NOTE_D5,
  NOTE_FS5,
  NOTE_FS5,
  NOTE_FS5,
  NOTE_E5,
  NOTE_E5,
  NOTE_FS5,
  NOTE_E5
};

int durations[] = {
  8,
  8,
  8,
  4,
  4,
  4,
  4,
  5,
  8,
  8,
  8,
  8,
  8,
  8,
  8,
  4,
  4,
  4,
  4,
  5,
  8,
  8,
  8,
  8
};

int songLength = sizeof(melody2) / sizeof(melody2[0]);

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte Character1[8] = {
  0b10001,
  0b11011,
  0b00000,
  0b01010,
  0b00000,
  0b01110,
  0b10001,
  0b11111
};

byte Character2[8] = {
  0b00100,
  0b00100,
  0b01110,
  0b00100,
  0b00100,
  0b00100,
  0b00100,
  0b00100
};
byte Character3[8] = {
  0b00000,
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};
byte Character4[8] = {
  0b01111,
  0b11100,
  0b10000,
  0b11110,
  0b11110,
  0b10000,
  0b11100,
  0b01111
};
byte Character5[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01010,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

byte Character9[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b01000,
  0b00100,
  0b00010,
  0b00001
};

byte Character10[8] = {
  0b00110,
  0b11110,
  0b01101,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte Character11[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01110,
  0b10000,
  0b11100,
  0b10000,
  0b01110
};

boolean TrwaGra = false;

int LVLGRY = 0; //ogolnie to 70 najlepiej
short int pozycja = 1;
int zycie = 255;
short int xd;
short int zd;
short int ad; //do Bossa
int x = 1000; //cos typu szybkosc potwora
short int czas1; //czas trwania potworka1
short int czas2; //czas trwania potworka2
short int czas4; //czas zycia na mapie
short int losowa; //losowanie miejsca dla potwora
short int pp1; //pozycja potwora 1
short int pp2; //pozycja potwora 2
short int ptrudnosci = 1;
short int lvltrudnosci = 2;
short int pozycjazycia;
short int del = 500; //opoznienie wprowadzenia do bosa
boolean potwor1 = false;
boolean potwor2 = false;
boolean wyborpt = false;
boolean bonuszycie = false;
boolean tutorialzycie = false;
boolean BOSS = false;
short int pBOSS = 5;
int czasbosa = 1; //to na 1 zmien////////////////////////////////////////////////////////////////////////////
short int lvlbossa = 0; //to na 0
short int ECTS;
boolean loose = false;
short int pozycjaECTS;
boolean wygrana = false;
int wynik;
short int losowa1;

void setup() {
  lcd.clear();
  lcd.createChar(0, Character1);
  lcd.createChar(1, Character2);
  lcd.createChar(2, Character3);
  lcd.createChar(3, Character4);
  lcd.createChar(4, Character5);
  lcd.createChar(5, Character9);
  lcd.createChar(6, Character10);
  lcd.createChar(7, Character11);
  lcd.clear();
  lcd.begin();

  pinMode(5, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  digitalWrite(4, LOW);
  lcd.clear();
  lcd.noCursor();
  lcd.noBlink();

  Serial.begin(9600);

}

void loop() {
  if (wygrana == true)
    fwygrana();

  if (wygrana == false) {
    if (zycie <= 0) {
      przegrana();
      loose = true;
    }

    if (loose == false) {
      if (TrwaGra == false) {
        lcd.setCursor(0, 0);
        lcd.print("Start      Opcje");
        lcd.setCursor(0, 1);
        lcd.print("8=====>  <=====8");
      }

      if (digitalRead(2) == LOW) {
        if (TrwaGra == false)
          start();
        if (BOSS == true)
          pozycja -= 1;
        if (BOSS == true && pozycja == 0 || pozycja == -1)
          pozycja = 15;
        if (BOSS == false)
          if (pozycja > 1)
            pozycja -= 1;
        if (pozycja < 0)
          zycie -= 3;
      }

      if (digitalRead(3) == LOW) {
        if (TrwaGra == false)
          opcje();
        if (BOSS == true)
          pozycja += 1;
        if (BOSS == true && pozycja == 15 || pozycja == 16)
          pozycja = 0;
        if (BOSS == false)
          if (pozycja < 14)
            pozycja += 1;
        if (pozycja > 15)
          zycie -= 3;
      }

      if (BOSS == false) { ///////////////////////////////////////////////////////////////BOSS WYLACZONY////////////////////////////////////////////////////
        if (TrwaGra == true) {
          lcd.setCursor(pozycja - 1, 1);
          lcd.print("-");
          if (zycie > 230) {
            lcd.setCursor(pozycja, 1);
            lcd.print(".");
          }
          if (zycie <= 230) {
            lcd.setCursor(pozycja, 1);
            lcd.print(",");
          }
          lcd.setCursor(pozycja + 1, 1);
          lcd.print("-");

          losowa = random(0, 250 / sqrt(LVLGRY) / lvltrudnosci);
          if (losowa < 5) {
            if (potwor1 == false)
              potwor1 = true;
            if (potwor2 == false)
              if (LVLGRY > 5)
                potwor2 = true;
          }

          if (potwor1 == true) {
            czas1++;
            if (czas1 == 23) {
              czas1 = 0;
              LVLGRY++;
            }
          }
          //_________________________

          if (potwor2 == true) {
            czas2++;
            if (czas2 == 16) {
              czas2 = 0;
              LVLGRY++;
            }
          }
          //__________________________

          if (bonuszycie == true) {
            czas4++;
            if (czas4 == 30) {
              czas4 = 0;
            }
          }

          delay((40 + lvltrudnosci * 25) - LVLGRY);

          potwor();

          lcd.setCursor(pozycja - 1, 1);
          lcd.print(" ");
          lcd.setCursor(pozycja, 1);
          lcd.print(" ");
          lcd.setCursor(pozycja + 1, 1);
          lcd.print(" ");

          losowa1 = random(0, 250) / lvltrudnosci;
          if (losowa1 < 5)
            if (zycie < 100 && bonuszycie == false) {
              if (tutorialzycie == false) {
                lcd.clear();
                lcd.setCursor(3, 0);
                lcd.print("zycie");
                delay(1000);
                lcd.setCursor(5, 1);
                lcd.print("$");
                delay(500);
                lcd.setCursor(3, 1);
                lcd.print("->");
                delay(300);
                lcd.setCursor(6, 1);
                lcd.print("<-");
                delay(2000);
                lcd.clear();
                tutorialzycie = true;
              }
              bonuszycie = true;
            }

          if (bonuszycie == true && czas4 == 0) {
            pozycjazycia = (((pozycja + 14 + random(1, 14)) % 14) + 1);

            if (pozycjazycia == pp1 || pozycjazycia == pp1 - 1 || pozycjazycia == pp1 + 1 || pozycjazycia == pp1 - 2 || pozycjazycia == pp1 + 2 || pozycjazycia == pp2 || pozycjazycia == pp2 - 1 || pozycjazycia == pp2 + 1 || pozycjazycia == pp2 - 2 || pozycjazycia == pp2 + 2)
              pozycjazycia = (((pozycja + 14 + random(1, 14)) % 14) + 1);

            if (pozycjazycia == pp1 || pozycjazycia == pp1 - 1 || pozycjazycia == pp1 + 1 || pozycjazycia == pp1 - 2 || pozycjazycia == pp1 + 2 || pozycjazycia == pp2 || pozycjazycia == pp2 - 1 || pozycjazycia == pp2 + 1 || pozycjazycia == pp2 - 2 || pozycjazycia == pp2 + 2)
              pozycjazycia = (((pozycja + 14 + random(1, 14)) % 14) + 1);
          }
          if (bonuszycie == true) {
            lcd.setCursor(pozycjazycia, 1);
            lcd.print("$");
          }
          if (pozycja == pozycjazycia && zycie < 210 && bonuszycie == true) {
            zycie += (8 * lvltrudnosci);
            bonuszycie = false;
            lcd.setCursor(pozycjazycia, 1);
            lcd.print(" ");
          }

        }

        if (LVLGRY == 70) //////////////////to na 30 zmien/////////////////////////WLACZNIE BOSSA////////////////////////////////////////////////////////////
        {
          LVLGRY++;
          delay(del);
          lcd.clear();
          lcd.setCursor(6, 0);
          lcd.print("WTFF");
          delay(del);
          lcd.setCursor(2, 0);
          lcd.print("o.O");
          delay(del);
          lcd.setCursor(11, 0);
          lcd.print("O.o");
          delay(del);
          lcd.setCursor(11, 0);
          lcd.print("o.O");
          lcd.setCursor(2, 0);
          lcd.print("O.o");
          delay(del);
          lcd.setCursor(11, 0);
          lcd.print("O.o");
          lcd.setCursor(2, 0);
          lcd.print("o.O");
          delay(del);
          lcd.setCursor(11, 0);
          lcd.print("o.O");
          lcd.setCursor(2, 0);
          lcd.print("O.o");
          delay(del);
          lcd.setCursor(2, 0);
          lcd.print("o.O");
          lcd.setCursor(11, 0);
          lcd.print("O.o");
          delay(del);
          lcd.clear();
          lcd.print("   Gratulacje!   ");
          delay(del * 5);
          lcd.clear();
          lcd.print("    WYGRALES!    ");
          delay(del * 2);
          lcd.setCursor(0, 1);
          lcd.print("taki chuj");
          delay(del * 2);
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("TO  BYLO JESZCZE");
          lcd.setCursor(0, 1);
          lcd.print("      IZI      ");
          delay(del * 5);
          lcd.setCursor(0, 0);
          lcd.clear();
          lcd.print(" ZDOBADZ 10 ECTS ");
          delay(del);
          lcd.clear();
          lcd.print(" ZDOBADZ 10 ECTS ");
          delay(del);
          lcd.clear();
          lcd.print(" ZDOBADZ 10 ECTS ");
          delay(del * 10);
          lcd.clear();
          BOSS = true;
        }
      }

      if (BOSS == true) {

        lcd.setCursor(pozycja - 1, 1);
        lcd.print("-");
        lcd.setCursor(pozycja, 1);
        lcd.print(",");
        lcd.setCursor(pozycja + 1, 1);
        lcd.print("-");

        FBOSS();

        lcd.setCursor(pozycja - 1, 1);
        lcd.print(" ");
        lcd.setCursor(pozycja, 1);
        lcd.print(" ");
        lcd.setCursor(pozycja + 1, 1);
        lcd.print(" ");

      }
    }
  }

  analogWrite(5, zycie);
  if (zycie < 100 && ptrudnosci == 1)
    ptrudnosci += 1;
  if (zycie < 50 && ptrudnosci == 2)
    ptrudnosci += 3;
  if (zycie < 20 && ptrudnosci == 5)
    ptrudnosci += 5;
}
void FBOSS() {
  if (lvlbossa == 1) {
    lcd.setCursor(pBOSS + 1, 1);
    lcd.print("  ");
  }

  lcd.setCursor(0, 0);
  lcd.print(ECTS);

  lcd.setCursor(pBOSS, 0);
  lcd.write(byte(2));
  if (czasbosa > 50)
    lcd.print("CS");
  lcd.write(byte(2));

  if (lvltrudnosci == 6) {
    lvltrudnosci = 3;
  }

  if (czasbosa > 75)
    if (czasbosa % (random(1, 10) * lvltrudnosci) < 2) {
      lcd.setCursor(pBOSS - 1, 0);
      lcd.write(byte(4));
      lcd.setCursor(pBOSS + 4, 0);
      lcd.write(byte(4));
      if (lvlbossa == 1) {
        if (pBOSS < pozycja)
          pBOSS++;
        if (pBOSS > pozycja)
          pBOSS--;
      }
    }

  if (lvltrudnosci == 3) {
    lvltrudnosci = 6;
  }

  if (czasbosa == 100) //tu 100)
  {
    lvlbossa++;
  }

  if (lvlbossa == 1) {
    lcd.setCursor(pBOSS + 1, 1);
    lcd.write(byte(6));
    lcd.write(byte(5));
    if (pozycja == pBOSS + 1 || pozycja == pBOSS + 2 || pozycja == pBOSS || pozycja == pBOSS + 3)
      zycie -= 36 / lvltrudnosci;

    for (int i = 0; i < 16; i++)
      if (i != pBOSS && i != pBOSS - 1 && i != pBOSS + 4 && i != pBOSS + 1 && i != pBOSS + 2 && i != pBOSS + 3 && i != pBOSS + 4 && i != pBOSS - 2 && i != pBOSS + 5) {
        lcd.setCursor(i, 0);
        lcd.print(" ");
      }

    losowa = random(0, 250 / sqrt(LVLGRY) / 1);
    if (losowa < 5) {
      pozycjaECTS = (random(4, 12));
      lcd.setCursor(pozycjaECTS, 1);
      lcd.write(byte(7));
    }
    if (czasbosa % 10 == 0) {
      lcd.setCursor(pozycjaECTS, 1);
      lcd.print(" ");
      pozycjaECTS = -1;
    }
    if (pozycja == pozycjaECTS) {
      ECTS = (ECTS + 2);
      lcd.setCursor(pozycjaECTS, 1);
      lcd.print(" ");
      pozycjaECTS = -1;
    }
  }

  if (ECTS == 10)
    wygrana = true;

  thisNote = thisNote + 2;

  divider = pgm_read_word_near(melody + thisNote + 1);
  if (divider > 0) {

    noteDuration = (wholenote) / divider;
  } else if (divider < 0) {

    noteDuration = (wholenote) / abs(divider);
    noteDuration *= 1.5;
  }

  tone(buzzer, pgm_read_word_near(melody + thisNote), noteDuration * 0.9);
  delay(noteDuration - czasbosa / 10);
  noTone(buzzer);
  czasbosa++;

  if (thisNote == 1353)
    thisNote = 0;
}

void potwor() {
  if (potwor1 == true) {

    if (xd == 0) {
      pp1 = (((pozycja + 14 + random(1, 14)) % 14) + 1);

      if (pp2 == pp1 || pp2 == pp1 - 1 || pp2 == pp1 + 1 || pp2 == pp1 - 2 || pp2 == pp1 + 2)
        pp1 = (((pozycja + 14 + random(1, 14)) % 14) + 1);

      if (pp2 == pp1 || pp2 == pp1 - 1 || pp2 == pp1 + 1 || pp2 == pp1 - 2 || pp2 == pp1 + 2)
        pp1 = (((pozycja + 14 + random(1, 14)) % 14) + 1);
    }

    if (xd == 0) {
      lcd.setCursor(pp1, 0);
      lcd.print("E");
      delay(350 / ptrudnosci);
    }
    if (xd == 1) {
      lcd.setCursor(pp1, 0);

      lcd.print("C");
    }
    if (xd == 2) {
      lcd.setCursor(pp1, 0);

      lcd.print("T");
    }
    if (xd == 3) {
      lcd.setCursor(pp1, 0);

      lcd.print("S");
    }
    if (xd == 4) {
      lcd.setCursor(pp1, 1);

      lcd.write(byte(1));
      lcd.setCursor(pp1, 0);

      lcd.write(byte(0));
    }
    if (xd == 5) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print("O");
    }
    if (xd == 6) {
      lcd.setCursor(pp1 + 1, 1);

      lcd.print("S");
    }
    if (xd == 7) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print(" ");
    }
    if (xd == 8) {
      lcd.setCursor(pp1 + 1, 1);

      lcd.print(" ");
    }
    if (xd == 9) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print("O");
    }
    if (xd == 10) {
      lcd.setCursor(pp1 + 1, 1);

      lcd.print("S");
    }
    if (xd == 11) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print(" ");
    }
    if (xd == 12) {
      lcd.setCursor(pp1 + 1, 1);

      lcd.print(" ");
    }
    if (xd == 13) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print("O");
    }
    if (xd == 14) {
      lcd.setCursor(pp1 + 1, 1);
      lcd.print("S");

    }
    if (xd == 15) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print(" ");
    }
    if (xd == 16) {
      lcd.setCursor(pp1 + 1, 1);

      lcd.print(" ");
    }
    if (xd == 17) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print("O");
    }
    if (xd == 18) {
      lcd.setCursor(pp1 + 1, 1);
      lcd.print("S");
    }
    if (xd == 19) {
      lcd.setCursor(pp1, 0);

      lcd.print(" ");
    }
    if (xd == 20) {
      lcd.setCursor(pp1, 1);

      lcd.print(" ");
    }
    if (xd == 21) {
      lcd.setCursor(pp1 + 1, 1);;
      lcd.print(" ");
    }
    if (xd == 22) {
      lcd.setCursor(pp1 - 1, 1);

      lcd.print(" ");
    }

    xd++;

    if (xd == 23) {
      xd = 0;
      potwor1 = false;
    }

    if (pp1 == pozycja && xd != 0 && xd != 1 && xd != 2) {
      zycie -= 20 / ptrudnosci;
    }

    if (pp1 == pozycja + 1 && xd != 0 && xd != 1 && xd != 2) {
      zycie -= 10 / ptrudnosci;

    }

    if (pp1 == pozycja - 1 && xd != 0 && xd != 1 && xd != 2) {
      zycie -= 10 / ptrudnosci;
    }

  }

  if (potwor2 == true) {
    if (zd == 0) {
      pp2 = (((pozycja + 14 + random(1, 14)) % 14) + 1);

      if (pp2 == pp1 || pp2 == pp1 - 1 || pp2 == pp1 + 1 || pp2 == pp1 - 2 || pp2 == pp1 + 2)
        pp2 = (((pozycja + 14 + random(1, 14)) % 14) + 1);

      if (pp2 == pp1 || pp2 == pp1 - 1 || pp2 == pp1 + 1 || pp2 == pp1 - 2 || pp2 == pp1 + 2)
        pp2 = (((pozycja + 14 + random(1, 14)) % 14) + 1);
    }
    if (zd == 0) {
      lcd.setCursor(pp2 - 1, 0);
      lcd.print(" - ");
      delay(350 / ptrudnosci);
    }
    if (zd == 1) {
      lcd.setCursor(pp2 - 1, 0);
      lcd.print(";-;");

    }
    if (zd == 2) {
      lcd.setCursor(pp2, 0);
      lcd.print("_");

    }
    if (zd == 3) {
      lcd.setCursor(pp2, 0);
      lcd.print(" "); ///BEZ DELAY
      lcd.setCursor(pp2, 1);
      lcd.print("*"); ///DO TEGO W SENISE TE 2 RAZEM

    }
    if (zd == 4) {
      lcd.setCursor(pp2, 1);
      lcd.print(" ");

    }
    if (zd == 5) {
      lcd.setCursor(pp2, 0);
      lcd.print("-");

    }
    if (zd == 6) {
      lcd.setCursor(pp2 - 1, 1);
      lcd.print(",");

    }
    if (zd == 7) {
      lcd.setCursor(pp2 - 1, 1);
      lcd.print(" ");

    }
    if (zd == 8) {
      lcd.setCursor(pp2 + 1, 1);
      lcd.print(",");

    }
    if (zd == 9) {
      lcd.setCursor(pp2 + 1, 1);
      lcd.print(" ");

    }
    if (zd == 10) {
      lcd.setCursor(pp2 - 1, 1);
      lcd.print(",");

    }
    if (zd == 11) {
      lcd.setCursor(pp2 - 1, 1);
      lcd.print(" ");

    }
    if (zd == 12) {
      lcd.setCursor(pp2 + 1, 1);
      lcd.print(",");

    }
    if (zd == 13) {
      lcd.setCursor(pp2 + 1, 1);
      lcd.print(" ");

    }
    if (zd == 14) {
      lcd.setCursor(pp2 - 1, 0);
      lcd.print("   ");

    }
    if (zd == 15) {
      lcd.setCursor(pp2, 1);
      lcd.print(" ");
    }

    if (zd == 16) {
      lcd.setCursor(pp2 - 1, 1);
      lcd.print("  ");
    }

    zd++;

    if (zd == 16) {
      zd = 0;
      potwor2 = false;
    }

    if (pp2 == pozycja && zd != 0 && zd != 1 && zd != 2) {
      zycie -= 40 / ptrudnosci;
    }

    if (pp2 == pozycja + 1 && zd != 0 && zd != 1 && zd != 2) {
      zycie -= 20 / ptrudnosci;

    }

    if (pp2 == pozycja - 1 && zd != 0 && zd != 1 && zd != 2) {
      zycie -= 20 / ptrudnosci;
    }

  }

}

void start() {
  for (int i = 1; i < 40; i++) {
    digitalWrite(5, HIGH);
    delay(1000 / i);
    digitalWrite(5, LOW);
    delay(1000 / i);
  }
  lcd.clear();
  delay(300);
  lcd.setCursor(0, 0);
  lcd.print("------Gra-------");
  lcd.setCursor(0, 1);
  lcd.print("--Kocham  Oisy--");
  delay(3000);
  lcd.clear();
  TrwaGra = true;

}

void przegrana() {
  lcd.clear();
  delay(100);
  lcd.setCursor(0, 0);
  lcd.print("-Rozjebales sie-");
  lcd.setCursor(0, 1);
  delay(200);
  lcd.print("Wynik: ");
  wynik = ((LVLGRY / lvltrudnosci * 3) + czasbosa);
  if (lvltrudnosci == 1)
    wynik += LVLGRY * 20;
  lcd.print(wynik);
  delay(5000);
  lcd.setCursor(0, 0);
  lcd.print("Kliknij Reset :)");
  delay(5000);
  LVLGRY = 0;
  zycie = 255;
  ptrudnosci = 1;
  potwor1 = false;
  potwor2 = false;
  wyborpt = false;
  bonuszycie = false;
  tutorialzycie = false;
  BOSS = false;
  czasbosa = 1;
  lvlbossa = 0;
  ECTS = 0;
  loose = false;
  TrwaGra = false;

}

void opcje() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Level trudnosci");
  lcd.setCursor(0, 1);
  delay(3000);
  lcd.clear();
  lcd.print("1.Studnet-debil");
  lcd.setCursor(0, 1);
  delay(3000);
  lcd.clear();
  lcd.print("2.Student AIR");
  lcd.setCursor(0, 1);
  delay(3000);
  lcd.clear();
  lcd.print("3.Student ETI");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Prawy-wybor");
  lcd.setCursor(0, 1);
  lcd.print("Lewy-zatwierdz");
  lcd.blink();
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("IzI  Norm  Harde");
  lcd.setCursor(0, 1);
  lcd.print(" 1    2      3  ");

  while (wyborpt == false) {
    if (digitalRead(2) == LOW) {
      if (pozycja == 1) {
        digitalWrite(5, HIGH);
        delay(1000);
        digitalWrite(5, LOW);
        lcd.clear();
        lcd.noCursor();
        lcd.noBlink();
        lvltrudnosci = 6;
        break;
      }

      if (pozycja == 6) {
        digitalWrite(5, HIGH);
        delay(1000);
        digitalWrite(5, LOW);
        delay(1000);
        digitalWrite(5, HIGH);
        delay(1000);
        digitalWrite(5, LOW);
        delay(1000);
        lcd.clear();
        lcd.noCursor();
        lcd.noBlink();
        lvltrudnosci = 2;
        break;
      }
      if (pozycja == 13) {
        digitalWrite(5, HIGH);
        delay(1000);
        digitalWrite(5, LOW);
        delay(1000);
        digitalWrite(5, HIGH);
        delay(1000);
        digitalWrite(5, LOW);
        delay(1000);
        digitalWrite(5, HIGH);
        delay(1000);
        digitalWrite(5, LOW);
        lcd.clear();
        lcd.noCursor();
        lcd.noBlink();
        lvltrudnosci = 1;
        break;
      }
    }

    if (digitalRead(3) == LOW) {
      if (pozycja < 16)
        pozycja += 1;
      if (pozycja == 16)
        pozycja = 0;
    }

    lcd.setCursor(pozycja, 1);

    delay(100);
  }
}

void fwygrana() {
  lcd.clear();
  delay(3000);
  lcd.setCursor(0, 0);
  lcd.print("siema");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("nice ze chciales");
  lcd.setCursor(0, 1);
  lcd.print("pograc w oisy ");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("To moja 1 gra");
  lcd.setCursor(0, 1);
  lcd.print("na arduino i");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nie jest ");
  lcd.setCursor(0, 1);
  lcd.print("najlepsza");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ale ");
  lcd.setCursor(0, 1);
  lcd.print("grywalna xD");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("No wiec, jesli");
  lcd.setCursor(0, 1);
  lcd.print("to widzisz ");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("to zrob sobie");
  lcd.setCursor(0, 1);
  lcd.print("zdjecie z gierka");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("i pisz na dc:");
  lcd.setCursor(0, 1);
  lcd.print("Gitolddzik #7956");
  delay(10000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("a ja stawiam 1");
  lcd.setCursor(0, 1);
  lcd.print("piwko na armacie");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("TERAZ ZROB FOTO");
  lcd.setCursor(0, 1);
  lcd.print("Wynik");
  wynik = ((LVLGRY / lvltrudnosci * 3) + czasbosa) + zycie;
  lcd.print(wynik);
  delay(500);
  while (wygrana == true) {
    for (int thisNote = 0; thisNote < songLength; thisNote++) {

      int duration = 1000 / durations[thisNote];
      tone(8, melody2[thisNote], duration);

      int pause = duration * 1.3;
      delay(pause);

      noTone(8);
    }
  }

}