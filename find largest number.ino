// C++ code
//largest number among three numbers
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int n1,n2,n3;
  n1=1000,n2=888,n3=185; //value assign
  if(n1>n2 && n1>n3)
  {
    Serial.print(n1);
    Serial.print(" is the largest");
  }
  else if(n2>n1 && n2>n3)
  {
    Serial.print(n2);
    Serial.print(" is the largest");
  }
  else
  {
    Serial.print(n3);
    Serial.print(" is the largest");
  }
  Serial.println("");
  delay(1000);
}