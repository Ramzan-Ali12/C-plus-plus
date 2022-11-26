#include<iostream>
using namespace std;
void line();
void line(int n);
void line(int n,char c);

void line()
{
int i;
for(i=1;i<=10;i++)
cout<<"*";	
cout<<endl;
}
void line(int n)
{
int i;
for(i=1;i<=n;i++)
cout<<"#";
cout<<endl;
}

void line(int n,char c)
{

int i;
	for(i=1;i<=n;i++)
	cout<<c;
}
int main()
{
line();
line(4);
line(5,'@');
return 0;
}
