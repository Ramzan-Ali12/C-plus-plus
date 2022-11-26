#include<iostream>
#include<string.h>
using namespace std;
Class time
{
public:
int hour,minute,second;
time(int h,int m,int s)
{
hour=h;
minute=m;
second =s;
}
time(time &t)
{
hour=t.hour;
minute=t.minute;
second =t.second;
}
void show()
{
cout<<"timings is="<<hour<<minute<<second;
}
int operator++()
{
minute=++minute;
return(minute);
}
int operator--()
{
minute=--minute;
reutrn(minute);
}
};
int main()
{

time t(1,20,30);
int x,p;
t.show();
x=t.operator++();
t.minute=x;
t.show();
p=t.operator--();
t.minute=p;
t.show();

}
