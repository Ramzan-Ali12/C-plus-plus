/*
#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++)
{
for(int j=1;j<=5;j++)
{
if(j<=i)
cout<<"*";
else 
cout<<" ";
}
cout<<endl;
}

return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=6;i++)
{
for(int j=1;j<=10;j++)
{
if(j>=6-i&&j<=4+i)
cout<<"*";
else 
cout<<" ";
}
cout<<endl;
}

return 0;
}

