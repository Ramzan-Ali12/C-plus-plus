#include<iostream>
using namespace std;
template<class x>
x get(x a,x b,x c)
{cout<<"reverse values is"<<endl;

    cout<<c<<" "<<b<<" "<<a<<endl;
}
int main()
{
    int a,b,c;
    cout<<"enter three integers"<<endl;
    cin>>a>>b>>c;
 cout<<get(a,b,c)<<endl;
 
    
}