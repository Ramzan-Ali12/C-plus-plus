#include <iostream>
#include<string.h>
using namespace std;
class A
{
private:
    int m;
public:
   int n;
    void getdata_m_n(void)
    {
        cout<<"enter value of m :"<<endl;
        cin>>m;
       cout<<"enter value of n:"<<endl;
       cin>>n;
    }
    int retm(void)
    {
        return m;
    }
};

class B:protected A
{
private:
    int sum;
public:
    int add(void)
    {
        getdata_m_n();
        sum=retm()+n;
        return(sum);
    }
    void display(void)
    {
        cout<<"Value of m is"<<" "<<retm()<<endl;
        cout<<"Value of n is"<<" "<<n<<endl;
        cout<<"sum is:"<<sum<<endl;
    }

};
int main()
{
    B obj;
    obj.add();
    obj.display();
    
}

