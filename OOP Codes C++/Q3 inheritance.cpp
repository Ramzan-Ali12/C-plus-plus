//This is the example of multiple inheritance
#include<iostream>
using namespace std;
class Teacher
{
private:char name[100],adress[100];
int age;
public:
	void input()
	{
		cout<<"enter teacher name"<<endl;
		cin>>name;
		cout<<"enter teacher adress"<<endl;
		cin>>adress;
		cout<<"enter age"<<endl;
		cin>>age;
	}
	void show()
	{
		cout<<"Teacher information"<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Adress="<<adress<<endl;
		cout<<"Age="<<age<<endl;
	}
};
class writer
{
	private:
		char name[100],adress[100];
		int books;
		public:
			void input()
			{
				cout<<"Eneter name of writer"<<endl;
				cin>>name;
				cout<<"Enter adress of writer"<<endl;
				cin>>adress;
				cout<<"Enter no of books "<<endl;
				cin>>books;
			}
			void show()
			{
				cout<<"Writer information"<<endl;
				cout<<"Name="<<name<<endl;
				cout<<"Adress="<<adress<<endl;
				cout<<"Books="<<books<<endl;
			}
};
class Scholar:public Teacher,public writer
{
public:
void input()
{
	Teacher::input();
	writer::input();
}
void show()
{
	Teacher::show();
	writer::show();
	}	
};
int main()
{
Scholar obj;
obj.input();
obj.show();
return 0;
}
