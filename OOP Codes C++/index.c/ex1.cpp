#include<iostream>
using namespace std;
template<class s>
s min(s a[],int l)
{
    s min=a[0];
    for(int i=0;i<l;i++)
    if(a[i]<min)
    min=a[i];
    return  min;
}

int main(){
    int arr[5],m;
cout<<"enter three values in the array"<<endl;
for(int i=0;i<3;i++)
cin>>arr[i];
m=min(arr,5);
cout<<"Minimum value in the array is"<<endl<<m<<endl;
return 0;
}