// C++ code
//Leap year
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int yr;
  yr=2023;
  if(yr%400==0||(yr%4==0&&yr%100!=0))
     {
       Serial.print(yr);
       Serial.print(" is a Leap Year");
     }
   else
     {
       Serial.print(yr); 
       Serial.print(" is not a Leap Year");
     }
  Serial.println("");
  delay(1000);
}