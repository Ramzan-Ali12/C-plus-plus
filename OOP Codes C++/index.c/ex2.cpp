#include<iostream>
using namespace std;
template<class T>
class A
{
private:T arr[5];
public:
void input()
{
for(int i=0;i<5;i++)
cin>>arr[i];
}
void show()
{
    int i;
cout<<"enter index of array"<<endl;
cin>>i;
cout<<"The value at index"<<i<<endl;
}
};
int main(){
A <int> x;
A <char> y;
cout<<"enter five integers"<<endl;
x.input();
x.show();
cout<<"enter five characters"<<endl;
y.input();
y.show();
return 0;
}