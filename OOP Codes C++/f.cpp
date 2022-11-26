#include <iostream>
#include<string.h>
using namespace std;
class A{
private:
    int a,b;
public:
    void setdata(void);
    friend int add(void);//non member function
};
void A::setdata(){
cout<<"enter any two number"<<endl;
cin>>a>>b;
}
int add(void)//defination of friend function
{
  A c;
  int temp;
  c.setdata();
  temp=c.a+c.b;
  return temp;
}
/*class B{
    private:
        int b;
    public:
        void setdata(void));
    friend int show();

    };
void A*/

int main()
{
    int result;
    result=add();
    cout<<"sum="<<result;
}

