//This example demonstrate the multilavel inheritance and function overriding

#include<iostream>
using namespace std;
class A
{
private:
int a;
public:
	void in()
	{
		cout<<"enter a"<<endl;
		cin>>a;
	}
	void out()
	{
		cout<<"a="<<a<<endl;
	}
	int fun()
	{
		return a;
		}	
};
class B:public A
{
private:int b;
public:
void in()
{
	A::in();
	cout<<"enter b"<<endl;
	cin>>b;
}
void out()
{
A::out();
cout<<"b="<<b<<endl;	
}
int sun()
{
	return b;
	}	
};
class C:public B
{
private:
int c;
public:
void in()
{
	B::in();
cout<<"enter c"<<endl;
cin>>c;	
}	
void out()
{
	
    B::out();
	cout<<"c="<<c<<endl;
}
int sum()
{ int x; 
	x=fun()+sun()+c;
	cout<<"sum of a and b  and c is "<<x<<endl;
    return x;
}

};
int main()
{
C obj;
obj.in();
obj.out();
obj.sum();
return 0;
}
