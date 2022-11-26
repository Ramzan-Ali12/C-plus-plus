#include<iostream>
using namespace std;
class Employee
{
private:
	int eid,scale;
public:
	Employee()
	{
		eid=-1;
		scale=0;
	}
	void input()
	{
	cout<<"enter employee id"<<endl;
	cin>>eid;
	cout<<"enter scale"<<endl;
	cin>>scale;
	}
	void show()
	{
		cout<<"Employee id="<<eid<<endl;
		cout<<"Employee scale="<<scale<<endl;
	}
};
class Manager:public Employee
{
private:
	int mid;
	char dep[70];
	public:
	Manager()
	{
	Employee();
	mid=0;	
	}	
		void input()
		{
		Employee::input();
		cout<<"enter manager id"<<endl;
		cin>>mid;
		cout<<"enter manager department"<<endl;
		cin>>dep;
		
		}
		void show()
		{
			Employee::show();
			cout<<"Manager id="<<" "<<mid<<endl;
			cout<<" Manager Department="<<" "<<dep<<endl;
			
		}
};
int main()
{
Manager obj;
obj.input();
obj.show();
return 0;
}
