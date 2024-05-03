// C++ code
//Array value modifying
void setup()
{
  Serial.begin(9600);
  int arr[5]={1,2,3,4,5};
  for(int i=0;i<5;i++){
    Serial.print(arr[i]);
    Serial.print(" ");}
  
  Serial.println("");
  
  for(int i=100;i<105;i++)
  {
    arr[100-i]=i;
    Serial.print(arr[100-i]);
    Serial.print(" ");
  }
}

void loop()
{
  
}