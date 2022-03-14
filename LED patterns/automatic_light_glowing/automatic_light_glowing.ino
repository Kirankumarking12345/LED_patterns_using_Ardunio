int ir=7;
int value;
void setup() 
{
  pinMode(7,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
 
}

void loop() 
{
  value = digitalRead(7);
  if (value==0)
  {
    digitalWrite(9,1);
  }
  else
  {
    digitalWrite(9,0);
  }
  
  

}
