// Definim les notes, mitjançant les freqüències.  

#define NOTE_G3 196
#define NOTE_C3 131
#define NOTE_DS3 156
#define NOTE_F3 175
#define NOTE_B2 123
#define NOTE_D3 147

// Aquí creem la melodia, com a successió de notes i la duració de les mateixes

int melody[]={NOTE_G3,NOTE_C3,NOTE_DS3,NOTE_F3,NOTE_G3,NOTE_C3,NOTE_DS3,NOTE_F3,NOTE_D3,NOTE_F3,NOTE_B2,NOTE_D3,NOTE_DS3,NOTE_F3,NOTE_B2,NOTE_DS3,NOTE_D3,NOTE_C3};
int noteDurations[]={3,3,1,1,2,2,1,1,9,3,3,1,1,2,2,1,1,9};



void setup(){

}

// Es fan tocar les notes amb la seva freqüència i duració. 

void loop(){
for(int thisNote=0;thisNote<18;thisNote++){
int noteDuration=300*noteDurations[thisNote];
tone(8,melody[thisNote],noteDuration);
delay(noteDuration+30);
noTone(8);
}
}
