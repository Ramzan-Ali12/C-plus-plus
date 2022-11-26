#include<iostream>
using namespace std;
class A
{
private:
int x;
public:
void input(void)
{
cout<<"enter value of x:"<<endl;
cin>>x;
}
int git()
{
	return(x);
}	
};
class B
{
private:
	int y;
public:
void get()
{
cout<<"enter value of y:"<<endl;
cin>>y;
}
int fit()
{
return(y);
}	
};
class C:private A,private B
{
private:
	int sum;
public:			
int add()
{
sum=git()+fit();
}
	void show()
{
cout<<"The value of x:"<<x<<endl;
cout<<"The value of y:"<<y<<endl;
cout<<"sum is :"<<sum<<endl;
}	
};
int main()
{
C obj;
obj.input();
obj.get();
obj.add();
obj.show();
}
