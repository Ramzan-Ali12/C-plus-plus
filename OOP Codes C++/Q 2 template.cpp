//Elements in reverse order
#include<iostream>
using namespace std;
template <class T>
void fun(T a, T b,T c)
{
cout<<"elements in reverse order is"<<endl;
cout<<c<<" "<<" "<<b<<" "<<a;
cout<<endl;
}
int main()
{
int x,y,z;
float d,e,f;
char q,w,s;
cout<<"enter three integers values"<<endl;
cin>>x>>y>>z;
fun(x,y,z);
cout<<"enter three floating point values"<<endl;
cin>>d>>e>>f;
fun(d,e,f);
cout<<"enter three character values"<<endl;
cin>>q>>w>>s;
fun(q,w,s);
return 0;
}
