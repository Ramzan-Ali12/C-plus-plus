//This programe find the sum and average of user entering numbers
#include<iostream>
using namespace std;
class Marks{
	private:
	int a,b,c;
	public:
void in(){
cout<<"enter three numbers"<<endl;
cin>>a>>b>>c;
}
int sum(){
return a+b+c;
}
int avg(){
return(a+b+c)/3;
}
};
int main()
{
Marks m;
float a;
int s;
m.in();
s=m.sum ();
a=m.avg ();
cout<<"sum is"<<" "<<s<<endl;
cout<<"avg is"<<" "<<a<<endl;
return (0);
}

