#include<iostream>
using namespace std;
class A
{
public:
	virtual void show()
	{
		cout<<"class A"<<endl;
	}
};
class B:public A
{
public:
	void show()
	{
		cout<<"class B"<<endl;
	}
};
class C:public B
{
public:
	void show()
	{
	cout<<"class C"<<endl;
	}
};
int main()
{
A obj;
B obj1;
C obj2;
A *ptr;
ptr=&obj;
ptr->show();
ptr=&obj1;
ptr->show();
ptr=&obj2;
ptr->show();
return 0;
}
