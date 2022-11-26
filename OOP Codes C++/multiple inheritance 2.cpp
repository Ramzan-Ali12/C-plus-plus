#include<iostream>
using namespace std;
class A
{
private:
int a;
public:
void in()
{
	cout<<"Enter a"<<endl;
	cin>>a;
}
void out()
{
cout<<"value of a is"<<a<<endl;	
}		
};
class B
{
private:
int b;
public:
void input()
{	
cout<<"enter b"<<endl;
cin>>b;
}
void show()
{
cout<<"value of b is"<<b<<endl;
}
};
class C:public A,public B
{
private:int c;
public:
	void get()
	{
		A::in();
		B::input();
		cout<<"enter c"<<endl;
		cin>>c;
	}
	void display()
	{
		A::out();
		B::show();
	cout<<"Value of c is"<<c<<endl;
	}
};
int main()
{
	C obj;
	obj.get();
	obj.display();
	return 0;
}
