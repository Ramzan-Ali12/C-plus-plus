//This example demonstrate the static data members
#include<iostream>
using namespace std;
class Student
{
private:
	 static int r;
	int rno,marks;
	char name[20];
	public:
		Student()
		{
			r++;
			rno=r;
		}
		void get()
		{
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"enter Marks:"<<endl;
			cin>>marks;
		}
		void show()
		{
		cout<<"Roll No"<<" "<<rno<<endl;
		cout<<"Name"<<" "<<name<<endl;
		cout<<"Marks"<<" "<<marks<<endl;
		}		
};
int Student::r=0;
int main()
{
Student s1,s2,s3,s4;
s1.get();
s2.get();
s3.get();
s1.show();
s2.show();
s3.show();
return 0;
}
