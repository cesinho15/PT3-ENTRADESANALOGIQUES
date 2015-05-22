  
  const int led0 = 9;               
  const int led1 = 10;
  const int led2 = 11;
  const int ldr1 = A1;
  const int ldr0 = A0;         
  const int ldr2 = A2;

  int velocitat = 20;          
  int valLdr0; 
  int valLdr1;
  int valLdr2;

void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  Serial.begin(9600);
}


void loop()
{
  valLdr0 = analogRead(ldr0);   
  valLdr1 = analogRead(ldr1);
  valLdr2 = analogRead(ldr2);
  
  valLdr0 = map(valLdr0, 300, 900, 0, 255);   
  valLdr1 = map(valLdr1, 200, 800, 0, 255);
  valLdr2 = map(valLdr2, 300, 900, 0, 255);
  
  Serial.print(valLdr0);
  
  analogWrite(led0, valLdr0);    
  analogWrite(led1, valLdr1);
  analogWrite(led2, valLdr2);
}
