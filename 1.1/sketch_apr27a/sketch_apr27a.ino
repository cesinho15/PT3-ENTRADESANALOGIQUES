const int a1 = 3;          // donar nom al pin 3 de l’Arduino
const int a2 = 5;          // donar nom al pin 5 de l’Arduino
const int a3 = 6;          // donar nom al pin 6 de l’Arduino
const int a4 = 9;          // donar nom al pin 9 de l’Arduino
const int a5 = 10;         // donar nom al pin 10 de l’Arduino
const int a6 = 11;         // donar nom al pin 11 de l’Arduino
int vel = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(a1, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(a2, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(a3, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(a4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(a5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(a6, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(a1, 10);     // posar PWM del pin 3 a 10
  analogWrite(a2, 10);     // posar PWM del pin 5 a 10
  analogWrite(a3, 10);     // posar PWM del pin 6 a 10
  analogWrite(a4, 10);     // posar PWM del pin 9 a 10
  analogWrite(a5, 10);     // posar PWM del pin 10 a 10
  analogWrite(a6, 10);     // posar PWM del pin 11 a 10
  
  delay(vel);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 100);     // posar PWM del pin 3 a 100
  analogWrite(a2, 100);     // posar PWM del pin 5 a 100
  analogWrite(a3, 100);     // posar PWM del pin 6 a 100
  analogWrite(a4, 100);     // posar PWM del pin 9 a 100
  analogWrite(a5, 100);     // posar PWM del pin 10 a 100
  analogWrite(a6, 100);     // posar PWM del pin 11 a 100
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 255);    // posar PWM del pin 3 a 255
  analogWrite(a2, 255);    // posar PWM del pin 5 a 255
  analogWrite(a3, 255);    // posar PWM del pin 6 a 255
  analogWrite(a4, 255);    // posar PWM del pin 9 a 255
  analogWrite(a5, 255);    // posar PWM del pin 10 a 255
  analogWrite(a6, 255);    // posar PWM del pin 11 a 255
   
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 50);     // posar PWM del pin 3 a 50
  analogWrite(a2, 50);     // posar PWM del pin 5 a 50
  analogWrite(a3, 50);     // posar PWM del pin 6 a 50
  analogWrite(a4, 50);     // posar PWM del pin 9 a 50
  analogWrite(a5, 50);     // posar PWM del pin 10 a 50
  analogWrite(a6, 50);     // posar PWM del pin 11 a 50
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
}
