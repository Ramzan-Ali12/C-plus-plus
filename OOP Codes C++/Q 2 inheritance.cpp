//This is the example of multilavel inheritance
#include<iostream>
using namespace std;
class Localphone
{
private:int ph;
public:
	void input()
	{
		cout<<"Enter phone number"<<endl;
		cin>>ph;
	}
	void show()
	{
		cout<<"Ph="<<ph<<endl;
	}
		
};
class Natphone:public Localphone
{
private:
	int citycode;
	public:
	void input()
		{
			cout<<"Enter city code"<<endl;
			cin>>citycode;
			Localphone::input();
		}
	void show()
	{
	cout<<"City code="<<citycode<<endl;
	Localphone::show();
	}
};
class Intphone:public Natphone
{
private:int ccode;
public:
	void input()
	{
		cout<<"enter country code"<<endl;
		cin>>ccode;
		Natphone::input();
	}
	void show()
	{
	cout<<"Country code="<<ccode<<endl;
	Natphone::show();
	}
};
int main()
{
	Intphone obj;
	obj.input();
	obj.show();
	return 0;

}

