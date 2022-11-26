#include<iostream>
using namespace std;
class simple
{
protected:
	int a,b;
public:
	simple()
	{
		a=b=0;
	}
	void in()
	{
		cout<<"enter the value of a"<<endl;
		cin>>a;
		cout<<"enter the value of b"<<endl;
		cin>>b;	
	}
	void add()
	{
		cout<<"a+b="<<a+b<<endl;
	}
	void sub()
	{
	cout<<"a-b="<<a-b<<endl;
	}
	void mul()
	{
	cout<<"a*b="<<a*b<<endl;
	}
	void div()
	{
	cout<<"a/b="<<a/b<<endl;
	}
};
class complex:public simple
{
public:
void add()
{
if(a<=0||b<=0)
cout<<"Error is displaying"<<endl;
else
simple::add();
}
void sub()
{
if(a<=0||b<=0)
cout<<"Error is displaying"<<endl;
else
simple::sub();
}
void mul()
{
if(a<=0||b<=0)
cout<<"Error is displaying"<<endl;
else
simple::mul();
}
void div()
{
if(a<=0||b<=0)
cout<<"Error is displaying"<<endl;
else
simple::div();
}	
};
int main()
{

complex obj;
obj.in();
obj.add();
obj.sub();
obj.mul();
obj.div();
return 0;
}

