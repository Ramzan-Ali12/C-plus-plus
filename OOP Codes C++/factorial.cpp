#include<iostream>
using namespace std;
class A
{
private:
int num;
int factorial=1;
public:
	void calculate()
	{
	cout<<"enter a number"<<endl;
	cin>>num;
	
	while(num>1)
		{
		
		factorial=factorial*num;
		num--;}
		
	}
	
	void show()
	{
	cout<<"factorial:"<<factorial;
	}
};
int main()
{
A obj;
obj.calculate();
obj.show();
return 0;
}
