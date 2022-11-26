#include<iostream>
using namespace std;
class A{
public:
void show()
{
    cout<<"parent class A"<<endl;
}
class B:public A
void show()
{
    cout<<"child class B"<<endl;
}
class C:public B
void show()
{
    cout<<"Child class C";
}
};
int main(){
A  obj;
B obj1;
C obj2;
A *ptr;
ptr->show();

return 0;
}