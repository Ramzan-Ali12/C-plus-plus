#include<iostream>
using namespace std;
class Result
{
private:int a[3];
public:
void in()
{
	for(int i=0;i<3;i++)
	{
	
	cout<<"enter array elements"<<endl;
	cin>>a[i];
}
	}
	void show()
	{
		int t=0;
		for(int i=0;i<3;i++)
		{
		cout<<"elements in array"<<a[i]<<endl;
		t=t+a[i];
	}
	cout<<"Total elements in array"<<t<<endl;
	cout<<"Average elements in array"<<endl<<float(t)/3;	
	}	
};
class student
{
private:int roll;
char name[100];
Result res;
public:
	void in()
	{
		cout<<"enter roll number of student"<<endl;
		cin>>roll;
		cout<<"enter name of student"<<endl;
		cin>>name;
		res.in();
	}
	void show()
	{
	cout<<"personal information"<<endl;
	cout<<"Roll number="<<roll<<endl;
	cout<<"Name="<<name<<endl;
	res.show();
		}
};
int main()
{
student obj;
obj.in();
obj.show();
return 0;
}

