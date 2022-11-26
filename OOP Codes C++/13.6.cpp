#include<iostream>
using namespace std;
class Array{
int a[5];
public:
void fill();
void display();
int max();
int min();
};
void Array::fill(){
for(int i=0;i<=4;i++){

cout<<"enter a["<<i<<"]"<<endl;
cin>>a[i];
}
}
void Array::display()
{
for(int i=0;i<=4;i++)
cout<<"a["<<i<<"]"<<a[i]<<endl;
}
int Array::max(){
int m=a[0];
for(int i=0;i<=4;i++)
if(m<a[i])
m=a[i];
return m;

}
int Array::min(){
int m=a[0];
for(int i=0;i<=4;i++)
if(m>a[i])
m=a[i];
return m;
}
int main(){
Array a;
a.fill();
cout<<"you entered following values"<<endl;
a.display();
cout<<"Maximum value is"<<a.max()<<endl;
cout<<"minmium value is"<<a.min()<<endl;
return(0);
}
