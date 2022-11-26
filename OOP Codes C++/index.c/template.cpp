#include<iostream>
using namespace std;
//This is function template
template <class x>//genric data type
x big(x a,x b)
{
   if(a>b)
   return (a);
   else
   return (b);
}
int main(){
cout<<big(33,77)<<endl;
cout<<big(4.5,5.5)<<endl;
return 0;
}