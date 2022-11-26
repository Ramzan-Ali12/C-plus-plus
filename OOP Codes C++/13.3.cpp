#include<iostream>
using namespace std;
class circle{
private:
	float radius;
	public:
		void get_radius(float r){
		radius=r;
		}
		void area()
		{
	cout<<"Area of circle is"<<3.14*radius*radius<<endl;	
		}
		void circum(){
			cout<<"circumference of circle is"<<2*3.14*radius<<endl;
		}
};
int main()
{
circle c;
float rad;
cout<<"enter radius"<<endl;
cin>>rad;
c.get_radius(rad);
c.area();
c.circum();
return(0);
}
