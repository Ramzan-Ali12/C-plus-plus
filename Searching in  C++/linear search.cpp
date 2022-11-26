#include<iostream>
using namespace std;
int main()
{
int i,n,loc=-1;
int arr[5]={10,30,20,40,50};
cout<<"enter value to find in array";
cin>>n;
for(i=0;i<5;i++)

	if(arr[i]==n)
	loc=i;
	if(loc==1)
	cout<<"value not found in the array";
	
	else
	cout<<"value found at index"<<loc;
	return 0;
}
