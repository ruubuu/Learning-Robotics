// C++ code
//if-else
/*if(condition1,condition2,....)
	{
    code
    }
  else
    {
    code
    }*/
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 if(Serial.available()>0)
 {
  char data=Serial.read();
  if(data=='r'||data=='R')
  {
    Serial.println("Today is a rainy day");
  }
  else if(data=='s'||data=='S')
  {
    Serial.println("Today is a sunny day");
  }
  else if(data=='c'||data=='C')
  {
    Serial.println("Today is a chilly day");
  }
  delay(1000);
 }
}