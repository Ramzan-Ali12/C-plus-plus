//Ambiguity in multiple inheritance
#include<iostream>
using namespace std;
class A
{
public:
	void show()
	{
		cout<<"This is a class a"<<endl;
	}
};
class B
{	
public:
	void show()
	{
	cout<<"This is a class b"<<endl;
	}
};
class C:public A,public B
{
public:

void show()
{
A::show();
B::show();
cout<<"Class C"<<endl;
}
};
int main()
{
C obj;
obj.show();
return 0;
}
