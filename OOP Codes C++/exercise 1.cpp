#include<iostream>
using namespace std;
class Time
{
private:
int h;
int s;
int m;
	public:
		Time()
		{
		h=m=s=0;	
		}
		Time(int hh,int mm,int ss)
		{
			h=hh,m=mm,s=ss;
		}
		void operator++()
		{
		if(m==59)
		{
		m=0;
		h++;
		}
		else
			m++;
		}
		void operator--()
		{
			if(m==0){
			
			m=59;
			h--;
		}
			else
				m--;
		}
		void input()
		{
		cout<<"enter Hours"<<endl;
		cin>>h;
		cout<<"enter Minutes"<<endl;
		cin>>m;
		cout<<"ener seconds"<<endl;
		cin>>s;
		}
		void show()
		{
			cout<<"Hours"<<" "<<h<<endl;
			cout<<"Minutes"<<" "<<m<<endl;
			cout<<"seconds"<<" "<<s<<endl;
		}
};
int main()
{
	Time obj;
	obj.input();
	obj.show();
	//obj++;
	obj.operator++();
	obj.show();
//	obj--;
    obj.operator--();
	obj.show();
	return 0;
}
