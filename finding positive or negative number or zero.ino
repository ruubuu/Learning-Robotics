// C++ code
//positive negative problem
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int n=-453;
  if(n>0)
  {
    Serial.print(n);
    Serial.print(" is positive");
  }
  else if(n==0)
  {
    Serial.print(n);
    Serial.print(" is neither positive nor negative");
  }
  else
  {
    Serial.print(n);
    Serial.print(" is negative");
  } 
  Serial.println("");
  delay(1000); // Wait for 1000 millisecond(s)
}