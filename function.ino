// C++ code
//function
void setup()
{
  Serial.begin(9600);
  int res=Sum(10,25);
  Serial.println(res);
}

void loop()
{
  
}
int Sum(int x,int y)
{
  int sum=x+y;
  return x+y;
}