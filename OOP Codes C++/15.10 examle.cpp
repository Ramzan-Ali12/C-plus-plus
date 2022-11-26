#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class person
{
protected:int id;
char name[80],adress[90];
public:
	person()
	{
		id=0;
		name[0]='\0';
		adress[0]='\0';
	}
	void in()
	{
		cout<<"Enter person id"<<endl;
		cin>>id;
		cout<<"Enter person name"<<endl;
		cin>>name;
		cout<<"Enter person adress"<<endl;
		cin>>adress;	
	}
	void out()
	{
		cout<<" Your person information"<<endl;
		cout<<"id="<<" "<<id<<endl;
		cout<<"Name="<<" "<<name<<endl;
		cout<<"Adress="<<" "<<adress<<endl;
	}	
};
class student:public person
{
protected:
	int roll,marks;
	public:
		student()
		{
			person:person();
			roll=marks=0;
		}
		void in()
		{
			person::in();
			cout<<"Enter Roll no"<<endl;
			cin>>roll;
			cout<<"enter Marks"<<endl;
			cin>>marks;
		}
		void out()
		{
			person::out();
			cout<<"Student information"<<endl;
			cout<<"Roll No ="<<" "<<roll<<endl;
			cout<<"Marks="<<" "<<marks<<endl;
		}
};
class scholarship:public student
{
private:char sname[10];
int samount;
public:
	scholarship()
	{
		student:student();
		sname[0]='\0';
		samount=0;
	}
	void in()
	{
	student::in();
		cout<<"Enter scholarship name:"<<endl;
		cin>>sname;
		cout<<"Enter scholarship amount"<<endl;
		cin>>samount;	
	}
	void out()
	{
		student::out();
	cout<<" Your Scholarship information"<<endl;
	cout<<"Scholarship name="<<" "<<sname<<endl;
	cout<<"Scholarship amount="<<" "<<samount<<endl;
	}	
};
int main()
{
	scholarship obj;
	obj.in();
	obj.out();
	return 0;
}
