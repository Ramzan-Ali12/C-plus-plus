#include <iostream>
#include<string.h>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
friend void fun(A,B);//Declaration of friend function
};
class B
{
    private:int b;
    public:
        void setdata(int y)
        {
            b=y;
        }
        friend void fun(A,B);//Declaration of friend function
};
void fun(A o1,B o2)
{
    cout<<"Sum is"<<o1.a+o2.b<<endl;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setdata(3);
    obj2.setdata(4);
    fun(obj1,obj2);
    return 0;
}

