#include<iostream>
using namespace std;
class B;
class A
{
private:
	int a;
	public:
		void setdata(int x)
		{a=x;}
		friend void fun(A,B);
};
class B
{
	private:int b;
	public:
		void setdata(int y)
		{
			b=y;
		}
		friend void fun(A,B);
};
void fun(A obj1,B obj2)
{
	cout<<"sum is"<<" "<<obj1.a+obj2.b<<endl;
}
int main()
{
A obj1;
B obj2;
obj1.setdata(3);
obj2.setdata(4);
fun(obj1,obj2);

}
