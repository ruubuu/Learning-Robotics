// C++ code
//string
void setup()
{
  Serial.begin(9600);
  String s1="Hello world!!!";
  int len=s1.length();
  Serial.println(len);
  char ch=s1.charAt(6);
  Serial.println(ch);
  String substring=s1.substring(0,7);
  Serial.println(substring);
  String in="1234",out="abcd";
  String sum=in+out;
  Serial.println(sum);
  String fn="Rubyna ",ln="Mahjabin";
  String fullname=fn+ln;
  Serial.println(fullname);
  String num1="15",num2="5";
  int n1=num1.toInt();
  int n2=num2.toInt();
  Serial.println(n1+n2);
  Serial.println(num1+num2);
  s1.toUpperCase();
  Serial.println(s1);
  s1.toLowerCase();
  Serial.println(s1);
  //str to int,int to str - type casting
  
}
void loop()
{

}