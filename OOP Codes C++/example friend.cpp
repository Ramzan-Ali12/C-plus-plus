#include<iostream>
using namespace std;
class A {
private:
	int a,b;
	public:
		void setdata(void)
		{
		cout<<"enter any two numbers"<<endl;
		cin>>a>>b;
		}
		friend int add(void);
};
int add(void)
{
	A c;
	c.setdata();
	int temp;
	temp=c.a+c.b;
	return temp;
}
int main()
{
add();
return 0;
}
