#include<iostream>
using namespace std;
class Test
{
private:
	int n;
public:
	void input()
	{
	cout<<"enter an integer"<<endl;
	cin>>n;
	}
	void display()
	{
	cout<<"N="<<n<<endl;
	}
};
int main()
{
Test *ptr;
//Test obj;
ptr=new Test;
ptr->input();
ptr->display();
return 0;
}
