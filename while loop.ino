// C++ code
//while loop
void setup()
{
  Serial.begin(9600);
  int i=1;
  while(i<=100)
  {
    Serial.println(i);
    i++;
    delay(500);
  }
}

void loop()
{
  
}