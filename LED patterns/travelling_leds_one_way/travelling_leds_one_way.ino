int i,j,k;
void setup()
{
  for(i=2;i<8;i++)
  {
      pinMode(i,OUTPUT);
  }

}
void loop()
{
  for(i=2;i<8;i++)
  {
    digitalWrite(i,1);
    digitalWrite(i+1,1);
    delay(1000);
    digitalWrite(i,0);
    digitalWrite(i+1,0);
  }
   for(i=7;i>2;i--)
  {
    digitalWrite(i,1);
    digitalWrite(i-1,1);
    delay(1000);
    digitalWrite(i,0);
    digitalWrite(i-1,0);
  }

  for(i=2;i<8;i++)
  {
    digitalWrite(i,1);
    digitalWrite(i+1,1);
    digitalWrite(i+2,1);
    delay(1000);
    digitalWrite(i,0);
    digitalWrite(i+1,0);
    digitalWrite(i+2,0);
  }
   for(i=7;i>2;i--)
  {
    digitalWrite(i,1);
    digitalWrite(i-1,1);
    digitalWrite(i-2,1);
    delay(1000);
    digitalWrite(i,0);
    digitalWrite(i-1,0);
    digitalWrite(i-2,0);
  }
  for(i=2;i<=7;i++)
  {
    digitalWrite(i,1);
    delay(1000);
  }

  
}
