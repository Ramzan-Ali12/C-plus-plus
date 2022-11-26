#include<iostream>
using namespace std;
template<class T>
T fun(T a, T b,T c)
{
	float s;
	s=a+b+c;
	return(s);
}
int main()
{
	int n1,n2,n3;
	float x1,x2,x3;
	int p;
	float m;
	cout<<"enter three integer point values "<<endl;
	cin>>n1>>n2>>n3;

	cout<<"enter three floating point values"<<endl;
	cin>>x1>>x2>>x3;
	p=fun(n1,n2,n3);
		cout<<"sum of three integers is"<<p<<endl;
	m=fun(x1,x2,x3);
	cout<<"sum of three floating values is"<<m<<endl;
}

