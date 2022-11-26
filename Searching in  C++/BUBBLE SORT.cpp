#include<iostream>
using namespace std;
int main()
{
int arr[5],i,j,temp;
cout<<"enter  five numbers in an array"<<endl;
for(i=0;i<5;i++)
cin>>arr[i];
cout<<"unsorted array is"<<endl;
for(i=0;i<5;i++)
cout<<arr[i]<<endl;
for(i=0;i<5;i++) //loop for passes
for(j=0;j<4;j++) //loop for itration
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
cout<<"sorted array is"<<endl;
for(i=0;i<5;i++)
cout<<" "<<arr[i];
}
