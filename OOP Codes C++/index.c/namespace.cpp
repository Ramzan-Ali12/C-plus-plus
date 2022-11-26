#include<iostream>
using namespace std;
//Group of declaration in namespace
namespace Myspace
{
int a;
int fun();
class A
{
    public:
    void f1();
};
}
using namespace Myspace;
int Myspace::fun()
{
    cout<<"Hello fun"<<endl;
}
void Myspace::A::f1()
{
    cout<<"Programming"<<endl;
}

int main()
{
A obj;
obj.f1();
fun();
a=5;
}