#include<iostream>
using namespace std;
class cpolygon
{
protected:int width,height;
public:
	void setvalues(int a,int b)
	{
	width=a;
	height=b;
	}
	virtual int area()
	{
		return 0;
	}
};
class CRectangle:public cpolygon
{
public:
	int area()
	{
	return(width*height);
	}
};
class CTriangle:public cpolygon
{
public:
	int area()
	{
	return(width*height)/2;
	}
};
int main()
{
cpolygon *ptr1;
cpolygon *ptr2;
cpolygon *ptr3;
ptr3=new cpolygon; 
CRectangle obj1;
CTriangle obj2;
ptr1=&obj1;
ptr2=&obj2;
ptr1->setvalues(4,5);
ptr2->setvalues(4,5);
cout<<ptr1->area()<<endl;
cout<<ptr2->area()<<endl;
cout<<ptr3->area();

return 0;
}

