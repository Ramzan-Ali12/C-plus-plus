#include<iostream>
#include<math.h>
using namespace std;
inline float ram(int x){
	float r;
    r=exp(x);
    
   return r ;
 }
int main()
{
float x,a;

 cout<<"enter exponenational number"<<endl;
 cin>>x;
 a=ram(x);
  cout<<"exponenational power is"<<"  "<<a<<endl;
return 0;
}
