// C++ code
//for loop-odd numbers print
void setup()
{
  Serial.begin(9600);
  for(int i=1;i<=100;i++)
  {
  	if(i%2==1)
    {
      Serial.println(i);
    }
    delay(1000);
  }
}

void loop()
{
  
}