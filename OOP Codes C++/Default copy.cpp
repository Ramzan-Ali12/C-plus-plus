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
person p1; 
p1.input();
p1.show();
person p2(p1);
cout<<"value of Default copy constructor"<<endl;
p2.show();
return 0;

}
