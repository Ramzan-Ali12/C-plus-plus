#include<iostream>
using namespace std;
template <class x>
class A
{
private:
x arr[3];
public:
void input()
{
for(int i=0;i<3;i++)
cin>>arr[i];
}
void output()
{
    cout<<"The values in the array is"<<endl;
    for (int i=0;i<3;i++)
     cout<<arr[i];
     cout<<endl;   
    
}
protected:
};
int main()
{
A <int> c;
A <char> u;
cout<<"enter three integers"<<endl;
c.input();
cout<<"enter three character"<<endl;
u.input();
c.output();
u.output();
return 0;
}