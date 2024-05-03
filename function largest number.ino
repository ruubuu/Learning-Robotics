// C++ code
//FindLargestNumber
void setup()
{
  Serial.begin(9600);
  int a=findLargestNumber(11,433,-33);
  Serial.print(a);
}

void loop()
{
  
}
int findLargestNumber(int n1,int n2,int n3)
{
  if(n1>n2 && n1>n3)
    return n1;
  else if(n2>n1 && n2>n3)
    return n2;
  else if(n3>n1 && n3>n2)
    return n3;
}