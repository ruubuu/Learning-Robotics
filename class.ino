//C++
//class
class calculation 
{

int a,b,c;

public:

void set(int n1,int n2,int n3){
a=n1;b=n2;c=n3;}

void sum(){
Serial.print("Sum:");
Serial.print(a+b+c);
Serial.println("");}

void multiply(){
Serial.print("Multiplication:");
Serial.print(a*b*c);
Serial.println("");}

void largestNumber(){
if(a>b && a>c)
{Serial.print(a);Serial.print(" is largest");}
if(b>a && b>c)
{Serial.print(b);Serial.print(" is largest");}
if(c>b && c>a)
{Serial.print(c);Serial.print(" is largest");}}

};

void setup()
{
Serial.begin(9600);
calculation x;
x.set(-4,3,7);
x.sum();
x.multiply();
x.largestNumber();
}

void loop()
{

}
