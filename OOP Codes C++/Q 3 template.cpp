#include<iostream>
using namespace std;
template <class T>
class A
{
private:T arr[4];
public:
	int i;
	void input()
	{
		for(int i=0;i<4;i++)
		cin>>arr[i];
	}
	void output()
	{
	cout<<"enter index in array"<<endl;
	cin>>i;
	cout<<"value at index "<<arr[i]<<endl;
	}
};
int main()
{
A <int> x;
A <char> y;
cout<<"enter fiver integers in array"<<endl;
x.input();
x.output();
cout<<"enter five character in array"<<endl;
y.input();
y.output();
return 0;
}
