// C++ code
//LDR Sensor
int light=9;
void setup()
{
  Serial.begin(9600);
  pinMode(light,OUTPUT);
}

void loop()
{
  int node=analogRead(A0);
  Serial.println(node);
  if(node<400)
    digitalWrite(light,HIGH);
  else
    digitalWrite(light,LOW);
}