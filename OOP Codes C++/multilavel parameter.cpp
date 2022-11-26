//Multilavel inheritance passing with parameters
#include<iostream>
using namespace std;
class A
{
private:
int a;
public:
void set(int x)
{

a=x;	
}
void out()
{
cout<<"a="<<a<<endl;
}	
};
class B:public A
{
private:
int b;
public:
void set(int m,int n)
{
A::set(m);
b=n;
}
void out()
{
	A::out();
cout<<"b="<<b<<endl;	
}	
};
class C:public B
{
private:int c;
public:
	void set(int k,int g,int h)
	{
		B::set(k,g);
		c=h;
	}
	void out()
	{
	B::out();
	cout<<"c="<<c<<endl;
	}
};
int main()
{
C obj;
obj.set(1,2,3);
obj.out();
}
