#include<iostream>
using namespace std;
class A{
private:
int a;
public:
void fun()
{cout<<"this is function"<<endl;}
protected:
};
int main(){
A obj;
obj.fun();
return 0;
}