#include<iostream>
using namespace std;
class Read
{
private:
int days,pages;
public:
Read()
{
	days=pages=0;
	}
	void in()
	{
		cout<<"how many pages have you read"<<endl;
		cin>>pages;
		cout<<"how many days have you read"<<endl;
		cin>>days;
		}
		void show()
		{
			cout<<"you have read"<<pages<<"pages is"<<days<<"days"<<endl;
			
			}
			void operator+=(Read r)
			{
				days=days+r.days;
				pages=pages+r.pages;
				}	
};
int main()
{
	Read r1,r2;
	r1.in();
	r2.in();
	cout<<"Reading number 1"<<endl;
	r1.show();
	cout<<"Reading number 2"<<endl;
	r2.show();
	cout<<"Adding r1 to r2 using += operator"<<endl;
	r2+=r1;
	cout<<"Total reading is as follows"<<endl;
	r2.show();
}
