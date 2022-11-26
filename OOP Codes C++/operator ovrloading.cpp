#include<iostream>
using namespace std;
class count
{
private:
	int a,b;
	public:
		
		void input()
		{
			cout<<"enter a"<<endl;
			cin>>a;
			cout<<"enter b"<<endl;
			cin>>b;
		}
		void show()
		{
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		}
	count operator+(count c)
	{
	count temp;
	temp.a=c.a+a;
	temp.b=c.b+b;
	return temp;	
	}
};
int main()
{
	count c1,c2,c3;
	c1.input();
	c2.input();
	c3=c1.operator+(c2);//c3=c1+c2
	c1.show();
	c2.show();
	c3.show();
	return 0;
}
