#include<iostream>
using namespace std;
// This is Abstract class
class parent
{
    public:
    virtual void show()=0;//pure virtual function with no body
};
class child1:public parent
{
public:
void show()
{
cout<<"child1 class..."<<endl;}
};
class child2:public parent 
{
public:
void show()
{
    cout<<"child2 class..."<<endl;
}
};
int main(){
parent *ptr[2];
child1 obj1;
child2 obj2;
ptr[0]=&obj1;
ptr[0]->show();
ptr[1]=&obj2;
ptr[1]->show();
return 0;
}