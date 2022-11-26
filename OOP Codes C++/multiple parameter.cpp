#include<iostream>
using namespace std;
class A
{
	private:
	int a;		
public:
A()
{
a=0;
}
A(int p)
{
a=p;
}
void show()
{
cout<<"a="<<a<<endl;
}
};
class B
{
	private:
		int b;
public:
	B()
	{
	b=0;
	}
	B(int n)
	{
	b=n;
	}
	void show()
	{
	cout<<"b="<<b<<endl;
	}
};
class C:public B,public A
{
	private:
	int c;
	public:
	C():B(),A()
	{
		c=0;
	}
	C(int x,int y, int z):B(y),A(z)
	{
	c=x;
	}
	void showc()
	{
	A::show();
	B::show();
	cout<<"c="<<c<<endl;
	}
};
int main()
{
	C obj(11,22,33);
	obj.showc();
	return 0;
}
