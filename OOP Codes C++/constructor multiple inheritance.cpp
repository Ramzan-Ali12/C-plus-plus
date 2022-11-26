#include<iostream>
using namespace std;
class A
{
public:
A()
{
	cout<<"constructor of class A"<<endl;
}	
};
class B
{
public:
	B()
	{
		cout<<"constructor of class B"<<endl;
	}
};
class C:public B,public A
{
	public:
	C():B(),A()
	{
	cout<<"constructor of class C"<<endl;
	}
};
int main()
{
	C obj;
	return 0;
}
