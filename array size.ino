// C++ code
//sizeof
void setup()
{
  Serial.begin(9600);
  int a=1;float b=3.14;char c='a';
  char ch[3]={'a','b','c'};
  float fl[2]={3.12,3.24};
  int arr[5]={1,2,3,4,5};
  Serial.println(sizeof(a));
  Serial.println(sizeof(b));
  Serial.println(sizeof(c));
  Serial.println(sizeof(arr));
  Serial.println(sizeof(arr)/2);
  Serial.println(sizeof(ch));
  Serial.println(sizeof(fl));
}

void loop()
{
 
}