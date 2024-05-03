// C++ code
//2D Array
void setup()
{
  Serial.begin(9600);
  char carray[3][4]={{'a','b','c','d'},{'1','2','3','4'},{'q','e','r','t'}};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      Serial.print(carray[i][j]);
      Serial.print(" ");
    }
   Serial.println("");
  }
}

void loop()
{
  
}