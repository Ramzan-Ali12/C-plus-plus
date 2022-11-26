#include<iostream>
using namespace std;
class sum
{
	private:
int a,b,t,c;
   public:
void getdata(void);
void putdata(void);
void multiply(void);
};
void sum::getdata(void)
{
cout<<"enter two values a&b"<<endl;
cin>>a>>b;	
}
void sum::putdata(void)
{
t=a+b;
cout<<"Addition of"<<a<<" "<<"and"<<b<<" "<<"is"<<endl;
cout<<t<<endl;
}
void sum::multiply(void)
{
c=a*b;
cout<<"multiplication of"<<a<<" "<<"and"<<" "<<b<<" "<<"is"<<endl;
cout<<c;
}
int main()
{
sum s;
s.getdata();
s.putdata();
s.multiply();
return(0);	
}


