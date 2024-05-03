// C++ code
//Motor Speed Control

int p=10,n=11;

void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  analogWrite(p,120);//255 output voltage maximum
  analogWrite(n,0);//0 output voltage minimum
  delay(2000);
  analogWrite(p,0);
  analogWrite(n,120);
  delay(2000);
}
