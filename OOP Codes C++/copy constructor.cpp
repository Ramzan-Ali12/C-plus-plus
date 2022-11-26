#include<iostream>
using namespace std;
class student
{
	private:int a,b;
	public:
		void input()
		{
			cout<<"enter a and b"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			cout<<"The two integers are "<<a<<" "<<b<<endl;
	}
	student(){
		a=b=0;
	}
    student(student  &s)
		{
		a=s.a;
		b=s.b;	
		}	
};
 
int main()
{
student s1;
s1.input();
s1.show();
student s2(s1);
cout<<"value of copy constructor"<<endl;
s2.show();
return 0;

}
