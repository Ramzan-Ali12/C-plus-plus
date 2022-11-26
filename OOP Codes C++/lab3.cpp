//Dectructor Example
#include<iostream>

using namespace std;

class Line
{
public:
int get_Length(void);
Line(int len);// simple constructor
Line (const Line&obj) ;// copy constructor
~Line();// destructor

private:
int*ptr;
};

// Member functions definitions including constructor
Line::Line(int len)
{
cout<<"Normal constructor allocating ptr"<<endl;
// allocate memory for the pointer;
ptr=new int;
*ptr=len;
}

Line::Line(const Line&obj)
{
cout<<"Copy constructor allocating ptr."<<endl;
ptr=new int;
*ptr=*obj.ptr;// copy the value
}
Line::~Line(void)
{
cout<<"Freeing memory!"<<endl;
delete ptr;
}
int Line::get_Length(void)
{
return*ptr;
}

void display(Line obj)
{
cout<<"Length of line : "<<obj.get_Length()<<endl;
}

int main()
{
Line line(10); //We make object of class

display(line);

return 0;
}

