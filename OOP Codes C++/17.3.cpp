#include<iostream>
using namespace std;
template <class T>
T findMin(T arr[],int n)
{
T min ;
min=arr[0];
for(int i=0;i<n;i++)
{
if(min>arr[i])
min=arr[i];
}
return min;
}
int main()
{
int iarr[]={1,2,3,4,5};
char carr[]={'z','f','e','w','k'};
double darr[]={11.2,33.5,66.7,22.5,1.9};
cout<<"Genric function to find minimum array"<<endl;
cout<<"integer minimum is"<<" "<<findMin(iarr,5)<<endl;
cout<<"character minimum is"<<" "<<findMin(carr,5)<<endl;
cout<<"Double minimum is"<<" "<<findMin(darr,5)<<endl;
return 0;
}
