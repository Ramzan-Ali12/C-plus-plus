#include<iostream>
using namespace std;
class parent
{
public:
	virtual void show()
	{
	cout<<"parent class"<<endl;
	}
};
class child:public parent
{
public:
	void show()
	{
	cout<<"child class"<<endl;
	}
};
class child1:public child
{
public:
	void show()
	{
	cout<<"child1 class"<<endl;
	}
};
int main()
{
parent *ptr[5];
parent p;
child c;
child1 c1;
int op;
cout<<"Enter 1 for parent,2 for child and 3 for child1"<<endl;
for(int i=0;i<5;i++)
{
cout<<"which object is to create"<<endl;
cin>>op;
if(op==1)
ptr[i]=&p;
else if(op==2)
ptr[i]=&c;
else 
ptr[i]=&c1;
}
for(int i=0;i<5;i++)
ptr[i]->show();
return 0;
}
