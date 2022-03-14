void setup()
{
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);  
}

void loop()
{
  digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(800);
  digitalWrite(13,LOW);

}
