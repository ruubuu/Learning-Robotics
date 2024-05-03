// C++ code
//numbers divisible by 7 between 100 to 500
void setup()
{
  Serial.begin(9600);
  for(int i=100;i<=500;i++)
  {
    if(i%7==0)
    {
      Serial.println(i);
      delay(500);
    }
  }
}

void loop()
{
  
}