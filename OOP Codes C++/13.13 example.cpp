//This programe with returns an object of passing parameter
#include<iostream>
using namespace std;
class Travel
{
private:int km,hr;
public:
	Travel()
	{
		km=hr=0;
	}
	void get()
	{
	cout<<"enter kilometers"<<endl;
	cin>>km;
	cout<<"enter hours"<<endl;
	cin>>hr;
	}
	void show()
	{
	cout<<"you traveled"<<" "<<km<<" "<<"kilometer in"<<" "<<hr<<" "<<"hours"<<endl;
	}
	Travel add(Travel p) 
	{
	Travel t;
	t.km=km+p.km;
	t.hr=hr+p.hr;
	return t;
//	cout<<"Total travelling in"<<t.km<<"in kilometer "<<t.hr<<"in hours"<<endl;
	}
};
int main()
{
Travel t1,t2,r;
t1.get();
t1.show();
t2.get();
t2.show();
r=t1.add(t2);
cout<<"Total travelling is as follows"<<endl;
r.show();
return 0;

}
