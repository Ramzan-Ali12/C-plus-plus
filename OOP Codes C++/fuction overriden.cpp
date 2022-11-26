#include<iostream>
using namespace std;
class A
{
private:
	int x;
	public:
		A(int p)
		{
		x=p;
		}
		void show()
		{
		cout<<"The value of x is:"<<x<<endl;
		}
	
};
class B:public A
{
private:
	char ch;
	public:
		B(char c,int m):A(m)
		{
			ch=c;
		}
void show()
{
	A::show();
cout<<"ch="<<ch<<endl;
}
};
int main()
{
	B obj('@',10);
	obj.show();
	return 0;
}
