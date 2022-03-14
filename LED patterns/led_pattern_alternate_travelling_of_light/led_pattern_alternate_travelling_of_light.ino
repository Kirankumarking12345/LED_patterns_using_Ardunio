int i,j;
void setup()
{
  for(i=2;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=2;i<5;)
  {
    for(j=7;j>i;i++,j--)
    {
      digitalWrite(i, HIGH);
      digitalWrite(j, HIGH);
      delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(j,LOW);
    }
  }
  for(i=4;i>1;)
  {
    for(j=5;j<=7;i--,j++)
    {
      digitalWrite(i, HIGH);
      digitalWrite(j, HIGH);
      delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(j,LOW);
    }
  }
}
