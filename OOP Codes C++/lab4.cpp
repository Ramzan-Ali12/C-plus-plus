//Demostrate the operator overloading prefix and postfix
#include<iostream>
using namespace std;
class Count
{
private:
int n;
public:
Count(){
n=0;
}
void show()
{
cout<<"n="<<n<<endl;
}
Count operator ++ ()//prefix
{
Count temp;
//n++
n=n+1;
temp.n=n++;
return temp;
}
Count operator ++(int)//postfix increment
{
Count temp;
//n=n+1;
n++;
temp.n=n++;
return temp;
}		
};
int main ()
{
Count x,y,z;
x.show();
z=++x;
y=x++;
y.show();
z.show();
}

