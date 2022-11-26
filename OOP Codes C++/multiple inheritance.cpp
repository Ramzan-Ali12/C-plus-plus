#include <iostream>
using namespace std;
class A
{
protected:
    int x;
public:
void input()
    {
        cout<<"enter value of x:"<<endl;
        cin>>x;
    }
    int retx()
    {
    	return x;
	}
};
class B
{
protected:
    int y;
public:
    void get()
    {

        cout<<"enter value of y"<<endl;
        cin>>y;
    }
    int rety()
    {
    	return y;
	}
};
class C:public A,public B
{
private:
    int s;
public:
    int add(void)
    {
        s=x+y;
    }
    void show()
    {
        cout<<"The value of x is:"<<x<<endl;
        cout<<"The value of y is:"<<y<<endl;
        cout<<"Sum of x and y is: "<<s<<endl;
    }
};
int main()
{
C obj;
obj.input();
obj.get();
obj.add();
obj.show();
return 0;
}

