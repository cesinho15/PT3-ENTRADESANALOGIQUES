const int a1 = 3;          // donar nom al pin 3 de l’Arduino
const int a2 = 5;          // donar nom al pin 5 de l’Arduino
const int a3 = 6;          // donar nom al pin 6 de l’Arduino
const int a4 = 9;          // donar nom al pin 9 de l’Arduino
const int a5 = 10;         // donar nom al pin 10 de l’Arduino
const int a6 = 11;         // donar nom al pin 11 de l’Arduino
int vel =1000;         // velocitat de l'acció en ms

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
  analogWrite(a1, 0);     // posar PWM del pin 3 a 0
  analogWrite(a2, 0);     // posar PWM del pin 5 a 0
  analogWrite(a3, 0);     // posar PWM del pin 6 a 0
  analogWrite(a4, 0);     // posar PWM del pin 9 a 0
  analogWrite(a5, 0);     // posar PWM del pin 10 a 0
  analogWrite(a6, 0);     // posar PWM del pin 11 a 0
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 0);     // posar PWM del pin 3 a 0
  analogWrite(a2, 0);     // posar PWM del pin 5 a 0
  analogWrite(a3, 0);     // posar PWM del pin 6 a 0
  analogWrite(a4, 0);     // posar PWM del pin 9 a 0
  analogWrite(a5, 0);     // posar PWM del pin 10 a 0
  analogWrite(a6, 20);     // posar PWM del pin 11 a 20
   
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 0);     // posar PWM del pin 3 a 0
  analogWrite(a2, 0);     // posar PWM del pin 5 a 0
  analogWrite(a3, 0);     // posar PWM del pin 6 a 0
  analogWrite(a4, 0);     // posar PWM del pin 9 a 0
  analogWrite(a5, 10);     // posar PWM del pin 10 a 10
  analogWrite(a6,100);     // posar PWM del pin 11 a 100
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 0);     // posar PWM del pin 3 a 0
  analogWrite(a2, 0);     // posar PWM del pin 5 a 0
  analogWrite(a3, 0);     // posar PWM del pin 6 a 0
  analogWrite(a4, 20);     // posar PWM del pin 9 a 20
  analogWrite(a5, 60);     // posar PWM del pin 10 a 60
  analogWrite(a6, 80);     // posar PWM del pin 11 a 80
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 0);     // posar PWM del pin 3 a 0
  analogWrite(a2, 0);     // posar PWM del pin 5 a 0
  analogWrite(a3, 20);     // posar PWM del pin 6 a 20
  analogWrite(a4, 60);     // posar PWM del pin 9 a 60
  analogWrite(a5, 80);     // posar PWM del pin 10 a 80
  analogWrite(a6, 100);     // posar PWM del pin 11 a 100
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 0);     // posar PWM del pin 3 a 0
  analogWrite(a2, 20);     // posar PWM del pin 5 a 20
  analogWrite(a3, 60);     // posar PWM del pin 6 a 60
  analogWrite(a4, 80);     // posar PWM del pin 9 a 80
  analogWrite(a5, 100);     // posar PWM del pin 10 a 100
  analogWrite(a6, 120);     // posar PWM del pin 11 a 120
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
 
  analogWrite(a1, 20);     // posar PWM del pin 3 a 20
  analogWrite(a2, 60);     // posar PWM del pin 5 a 60
  analogWrite(a3, 80);     // posar PWM del pin 6 a 80
  analogWrite(a4, 100);     // posar PWM del pin 9 a 100
  analogWrite(a5, 120);     // posar PWM del pin 10 a 120
  analogWrite(a6, 150);     // posar PWM del pin 11 a 150
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 50);     // posar PWM del pin 3 a 50
  analogWrite(a2, 100);     // posar PWM del pin 5 a 100
  analogWrite(a3, 120);     // posar PWM del pin 6 a 120
  analogWrite(a4, 150);     // posar PWM del pin 9 a 150
  analogWrite(a5, 200);     // posar PWM del pin 10 a 200
  analogWrite(a6, 255);     // posar PWM del pin 11 a 255
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 70);     // posar PWM del pin 3 a 70
  analogWrite(a2, 120);     // posar PWM del pin 5 a 120
  analogWrite(a3, 140);     // posar PWM del pin 6 a 140
  analogWrite(a4, 190);     // posar PWM del pin 9 a 190
  analogWrite(a5, 255);     // posar PWM del pin 10 a 255
  analogWrite(a6, 255);     // posar PWM del pin 11 a 255
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 130);     // posar PWM del pin 3 a 130
  analogWrite(a2, 180);     // posar PWM del pin 5 a 180
  analogWrite(a3, 200);     // posar PWM del pin 6 a 200
  analogWrite(a4, 255);     // posar PWM del pin 9 a 255
  analogWrite(a5, 255);     // posar PWM del pin 10 a 255
  analogWrite(a6, 255);     // posar PWM del pin 11 a 255
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 150);     // posar PWM del pin 3 a 150
  analogWrite(a2, 200);     // posar PWM del pin 5 a 200
  analogWrite(a3, 255);     // posar PWM del pin 6 a 255
  analogWrite(a4, 255);     // posar PWM del pin 9 a 255
  analogWrite(a5, 255);     // posar PWM del pin 10 a 255
  analogWrite(a6, 255);     // posar PWM del pin 11 a 255
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 200);     // posar PWM del pin 3 a 200
  analogWrite(a2, 255);     // posar PWM del pin 5 a 255
  analogWrite(a3, 255);     // posar PWM del pin 6 a 255
  analogWrite(a4, 255);     // posar PWM del pin 9 a 255
  analogWrite(a5, 255);     // posar PWM del pin 10 a 255
  analogWrite(a6, 255);     // posar PWM del pin 11 a 255
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(a1, 255);     // posar PWM del pin 3 a 255
  analogWrite(a2, 255);     // posar PWM del pin 5 a 255
  analogWrite(a3, 255);     // posar PWM del pin 6 a 255
  analogWrite(a4, 255);     // posar PWM del pin 9 a 255
  analogWrite(a5, 255);     // posar PWM del pin 10 a 255
  analogWrite(a6, 255);     // posar PWM del pin 11 a 255
  
  delay(vel);           // es queden leds velocitat ms en aquest estat
}
