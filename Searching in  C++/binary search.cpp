#include<iostream>
using namespace std;
int main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100};
int i,n,mid,start=0,end=9,loc=-1;
cout<<"enter any number to find";
cin>>n;
while(start<=end)
{
mid=(start+end)/2;

if(arr[mid]==n)
{
	loc=mid;
	break;
}
else if(n<arr[mid])
end=mid-1;
else
start=mid+1;
}

if(loc==-1)
cout<<n<<"not found!"<<endl;
else
cout<<n<<"found at index"<<loc<<endl;
}
