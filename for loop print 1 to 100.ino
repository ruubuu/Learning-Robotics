// C++ code
//loop-for
void setup()
{
  Serial.begin(9600);
  for(int i=1;i<=100;i++)
  {
    Serial.println(i);
    delay(1000);
  }
}

void loop()
{
 
}