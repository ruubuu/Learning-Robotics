//Larger number between two numbers
void setup()
{
	Serial.begin(9600);
}
void loop()
{
	if(Serial.available()>0)
    {
      int num_1=30;
      int num_2=15;
      if(num_1>num_2)
      {
		Serial.print(num_1);
        Serial.print("is larger");
      }
      else
      {
		Serial.print(num_2);
        Serial.print("is larger");
      }
      Serial.println("");
    }
}