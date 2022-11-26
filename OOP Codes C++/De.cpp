#include<iostream>
using namespace std;
class person
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
		
};
 
int main()
{
student s1;
s1.input();
s1.show();
student s2(s1);
cout<<"value of Default copy constructor"<<endl;
s2.show();
return 0;

}
