#include<iostream>
using namespace std;
template <class T>
class test
{
protected:
	T n[5];
public:
void input()
{
cout<<"enter numbers"<<endl;
for(int i=0;i<5;i++)
cin>>n[i];		
}
void output()
{
int sum=0;
cout<<"The enterd numberd is"<<endl;
for(int i=0;i<5;i++)
sum=n[i]+sum;
cout<<" "<<sum;
}
};
int main()
{
test <int>s;
s.input();
s.output();
return 0;
}
