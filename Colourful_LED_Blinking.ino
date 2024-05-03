// C++ code
//LED Blinking

int red=13,blue=12,green=11;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  rbgBlink();
  yellowBlink();
  purpleBlink();
  cyanBlink();
}

void rbgBlink()
{

  digitalWrite(red,HIGH);
  delay(500); 
  digitalWrite(red,LOW);
  delay(500); 
  
  digitalWrite(blue,HIGH);
  delay(500); 
  digitalWrite(blue,LOW);
  delay(500); 
  
  digitalWrite(green,HIGH);
  delay(500); 
  digitalWrite(green,LOW);
  delay(500);
}

void yellowBlink()
{
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  delay(300); 
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(300); 
}

void purpleBlink()
{
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  delay(300); 
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  delay(300);
}

void cyanBlink()
{
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(300); 
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(300);
}