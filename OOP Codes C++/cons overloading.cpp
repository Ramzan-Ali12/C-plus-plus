#include <iostream>
#include<string.h>
using namespace std;
class over{
    private:
int num;
char ch;
public:
    over()//no parameter constructor
    {
        num=0;
        ch='x';
    }
    over(int n,char c) //parametrized constructor
    {
        num=n;
        ch=c;
    }
    void show()
    {
        cout<<" num ="<<num<<endl;
        cout<<"ch ="<<ch<<endl;
    }


};
int main()
{
    over t,s(100,'p');
    cout<<"The null constructor is "<<endl;
    t.show();
    cout<<"The parametrized constructor is"<<endl;
    s.show();
}
