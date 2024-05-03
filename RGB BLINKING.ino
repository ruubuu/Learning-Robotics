// C++ code
//RGB LED
int red=13,blue=12,green=11;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(500); 
  digitalWrite(red, LOW);
  delay(500); 
  
  digitalWrite(blue, HIGH);
  delay(500); 
  digitalWrite(blue, LOW);
  delay(500); 
  
  digitalWrite(green, HIGH);
  delay(500); 
  digitalWrite(green, LOW);
  delay(500); 
}