// C++ code
//soil-moisture sensor
int snsr=A0;
int r=7,b=6,g=5;
void setup()
{
  Serial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop()
{
  int mstr=analogRead(snsr);
  Serial.println(mstr);
  if(mstr>=0 && mstr<=300)
    red();
  if(mstr>300 && mstr<=600)
    yellow();
  if(mstr>600)
    green();
}

void red()
{
  digitalWrite(r,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
}

void yellow()
{
  digitalWrite(r,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(g,HIGH);
}

void green()
{
  digitalWrite(r,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,HIGH);
}
