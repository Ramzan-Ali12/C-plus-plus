#include<iostream>
using namespace std;
int fact(int n)
{
if(n==0)
return 1;
return n*fact(n-1);	
}
int main()
{
int num=0;
cout<<"factorial of"<<" "<<num<<"is"<<" "<<fact(num)<<endl;
return 0;	
}
