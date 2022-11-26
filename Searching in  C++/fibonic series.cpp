
#include<iostream>
using namespace std;
int fib(int n);
int main()
{
int i;
for( i=1;i<=10;i++)	
cout<<"fiboic sreis is "<<fib(i)<<endl;
}
int fib(int n){
if(n==1 || n==2)
return (1);
return(fib(n-1)+fib(n-2));	
}

