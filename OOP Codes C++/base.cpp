#include<iostream>
using namespace std;
class A{
private:
public:
protected:
int n;
};
class B:virtual public A
{};
class C:virtual public A
{};
class Baby:public B,public C
{
    public:
    void set()
    {
    n=10;
    cout<<"n="<<n<<endl;
    }
};

int main(){
Baby obj;
obj.set();
return 0;
}