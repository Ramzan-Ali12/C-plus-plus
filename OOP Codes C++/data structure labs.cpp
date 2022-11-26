
/*#include <iostream>
 using namespace std; 
int main()
{
int array[] = {4,3,2};
 int n = 0; // traverse through array
 while (array[n]>=0)
{ 
cout << array[n]; 
n++;
}
}

*/












/*
#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{ int i,a[5],no,pos; 
 
cout<<"Enter data in Array: "<<endl;
for(i=0;i<5;i++) 
{ 
cin>>a[i];
}
cout<<"\n\nStored Data in Array: "<<endl; 
for(i=0;i<5;i++)
{
cout<<a[i]<<" ";
} 
cout<<"\n\nEnter position to insert number: ";
cin>>pos; 
if(pos>5) 
{ cout<<"\n\nThis is out of range"; } 
else 
{ cout<<"\n\nEnter new number: "<<endl; 
cin>>no; 
--pos;
for(i=5;i>=pos;i--) 
{ a[i+1]=a[i]; }
a[pos]=no;
cout<<"\n\nNew data in Array: "<<endl;
for(i=0;i<6;i++)
{ cout<<a[i]<<" "; } } 
return 0;
}

#include<iostream>
#include<conio.h>
using namespace std; 
int main()
 { int i,a[5],no,pos; 
cout<<"Enter data in array: "<<endl;
 for(i=0;i<5;i++) 
{ 
cin>>a[i]; 
} 
cout<<"\n\nStored Data in array is: "<<endl;
 for(i=0;i<5;i++) 
{
 cout<<a[i]<<" ";
 } 
cout<<"\n\nEnter position of element to delete: ";
 cin>>pos; 
if(pos>5) 
{
 cout<<"\n\nThis value is out of range: "; 
} 
else
 {
 --pos;
 for(i=pos;i<=4;i++)
 { 
a[i]=a[i+1]; 
} 
cout<<"\n\nNew data in array: "<<endl; 
for(i=0;i<4;i++) 
{ 
cout<<a[i]<<" ";
 } } 
 } 
*/
/*#include<iostream>
using namespace std;

void insertion_sort(int A[],int N)
{
int i,j,temp;
for (i=1;i<N;i++)
{

temp=A[i];
for(j=i-1;j>=0 &&temp<A[j];j--)
A[j+1]=A[j];
A[j+1]=temp;
}
}
int main()
{
int i;
int A[]={89,55,33,4,22,90,45,19,7};
insertion_sort(A,9);
cout<<" Inseration sort elements are"<<endl;
for(i=0;i<=8;i++)

cout<<" "<<A[i];

}
*/




