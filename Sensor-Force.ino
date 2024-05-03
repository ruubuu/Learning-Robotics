// C++ code
//Force sensor

int sensor=A0;
int r=7,b=6,g=5;
void setup()
{
 Serial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop()
{
  int force=analogRead(sensor);
  Serial.println(force);
  if(force>=0 && force<=150)
    green();
  if(force>150 && force<=300)
    yellow();
  if(force>300)
    red();
}

void green()
{
 digitalWrite(g,HIGH);
 digitalWrite(r,LOW);
 digitalWrite(b,LOW);
}

void red()
{
 digitalWrite(g,LOW);
 digitalWrite(r,HIGH);
 digitalWrite(b,LOW);
}

void yellow()
{
 digitalWrite(g,HIGH);
 digitalWrite(r,HIGH);
 digitalWrite(b,LOW);
}