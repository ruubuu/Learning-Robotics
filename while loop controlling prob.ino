// C++ code
//while loop controlling
void setup()
{
  Serial.begin(9600);
  while(1)
  {
    if(Serial.read()=='s')
    {
      while(1)
      {
      Serial.println("HELLO");
        if(Serial.read()=='b')
          break;
      }
      Serial.println("Loop broke");
    }
  }
}

void loop()
{
  
}
