#include <iostream>
 using namespace std; 
class perimeter 
{
 private:
 int l,b,peri;

 public: 
perimeter() //default constructor 
{ 
cout<<"\nEnter the values of l and b"<<endl;
 cin>>l>>b;
 } 
perimeter(int a) //Parameterized constructor with single parameter 
{ 
l=b=a;
 }
 perimeter(int l1, int b1) //Parameterized constructor with two parameters 
{
 l=l1;
 b=b1; 
} 
void calculate() //function to calculate the perimeter
 {
 peri=2*(l+b); 
cout<<peri;
}
};
int main ()
{
perimeter obj1, obj2(3), obj3(2,3); 
cout<<"\nPerimeter of Rectangle is "; obj1.calculate(); 
cout<<"\nperimeter of Square is "; obj2.calculate(); 
cout<<"\nPerimeter of Rectangle is "; obj3.calculate(); 
return 0;
}

