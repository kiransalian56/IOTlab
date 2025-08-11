void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
}

void loop()
{
  int pins[]={2,3,4,5,6};
  for(int i=4;i>0;i--)
  {
    digitalWrite(pins[i],HIGH);
    delay(100);
    digitalWrite(pins[i],LOW);
    delay(100);
  }
   for(int i=0;i<4;i++)
  {
    digitalWrite(pins[i],HIGH);
    delay(100);
    digitalWrite(pins[i],LOW);
    delay(100);
  }
}