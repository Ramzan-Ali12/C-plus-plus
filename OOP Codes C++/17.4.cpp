#include<iostream>
using namespace std;
template <class T>
class Test
{
private:T arr[3];
public:
	void input()
	{
	for(int i=0;i<3;i++)
	cin>>arr[i];
	}
	void output()
	{
	cout<<"The values in the array"<<endl;
	for(int i=0;i<3;i++)
	cout<<arr[i];
	cout<<endl;
	}
};
int main()
{
Test <int> x;
Test <char> y;
cout<<"enter three integers"<<endl;
x.input();
cout<<"enter three character"<<endl;
y.input();
x.output();
y.output();
return 0;
}
