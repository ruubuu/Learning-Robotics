// C++ code
//Taking input
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a=Serial.parseInt();
  Serial.println(a);
  delay(1000);
  float b=Serial.parseFloat();
  Serial.println(b);
  delay(1000);
  char c=Serial.read();
  Serial.println(c);
  delay(1000);
  String d=Serial.readString();
  Serial.println(d);
  delay(1000);
}