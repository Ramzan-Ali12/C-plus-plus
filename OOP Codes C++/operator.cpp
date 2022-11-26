#include <iostream>
#include<string.h>
using namespace std;
class integer
{
private:
    int x;
public:
    void setdata(int a)
    {
        x=a;
    }
    void showdata()
    {
        cout<<"x="<<x<<endl;
    }
    integer operator++(int)//postfix decrement
    { integer i;
    i.x=x++;
    return(i);
       // x=x+1;
    }
   /* integer operator++(int)//prefix decrement
    {
        integer i;
        i.x=++x;
        return(i);
        //x=x+1;
    }*/

};
int main()
{
  integer i1,i2;
  i1.setdata(3);
  i1.showdata();
  i2=i1++;//postfix incremrent
  //i1.operator++();
  i1.showdata();
  i2.showdata();
  //i2=++i1;//prefix increment
 //i1.operator++()i1 is a caller object and call operator++ function & pass no argument
  //i2.showdata();

}

