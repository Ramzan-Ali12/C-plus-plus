#include<iostream>
using namespace std;
class person
{
private:char name[90];
public:
	void input()
	{
	cout<<"enter name"<<endl;
	cin>>name;
	}
	void show()
	{
	cout<<"Your Name="<<name<<endl;
	}
};
int main()
{
person *ptr[5];

for(int i=0;i<5;i++)
{
	ptr[i]=new person;
	ptr[i]->input();
}
for(int i=0;i<5;i++)
ptr[i]->show();
return 0;
}
