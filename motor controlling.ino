// C++ code
//motor control

int p=12,n=13;

void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
  digitalWrite(n,LOW);
  digitalWrite(p,HIGH);
}