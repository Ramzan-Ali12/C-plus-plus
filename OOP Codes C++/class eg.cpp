#include<iostream>
using namespace std;
class sum
{
	private:
int a,b,t;
   public:
void getdata(void);
void putdata(void);
};
void getdata(void)
{
cout<<"enter two values a&b"<<endl;
cin>>a>>b;	
}
void putdata(void)
{
t=a+b;
cout<<"Addition of"<<a<<" "<<"and"<<b<<" "<<"is"<<endl;
cout<<t<<endl;
}
int main()
{
sum s;
s.getdata();
s.putdata();
return(0);	
}


