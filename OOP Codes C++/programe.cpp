#include<iostream>
using namespace std;
class age
{
protected:
	int a;
	public:
		void setage(int);
		void show();
};
class derived:public age
{
public:
	void show();
};
void age::setage(int v)
{
a=v;
}
void  age::show()
{
cout<<"Base class member function"<<endl;
cout<<"your age is"<<a<<endl;
}
void derived::show()
{
cout<<"Derived class member function"<<endl;
cout<<"your age is"<<a<<endl;
age::setage(11);
}
int main()
{
	age a;
	derived d;
	a.setage(19);
	d.show();
	
//	a.setage(18);
//	d.setage(19);
//	a.show();
	//d.show();
//	d.age::show();
	return 0;
	
}
