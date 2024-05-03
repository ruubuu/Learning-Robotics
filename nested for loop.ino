// C++ code
//Nested for loop
void setup()
{
  Serial.begin(9600);
  for(int i=0;i<5;i++)
  {
	for(int j=0;j<3;j++)
    {
      Serial.print(" Hello world		");
    }
    Serial.println("");
  }
}

void loop()
{
  
}