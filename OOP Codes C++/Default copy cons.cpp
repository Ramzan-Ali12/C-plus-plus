#include <iostream>
#include<string.h>
using namespace std;
class Book
{
private:
    int pg,pr;
    char title[50];
public:
    void get()
    {
        cout<<"enter tital"<<endl;
        cin>>title;
        cout<<"enter pages"<<endl;
        cin>>pg;
        cout<<"enter price"<<endl;
        cin>>pr;
    }
    void show()
    {
        cout<<"Title :"<<title<<endl;
        cout<<"pages:"<<pg<<endl;
        cout<<"pr:"<<pr<<endl;
    }
    /*Book(Book &b)
    {
        b1=c.b1;
        b2=c.b2;
    }*/
};
int main()
{
Book b1;
b1.get();    //get the attribute values
Book b2(b1);  //b1 object value copy the b2 constructor
Book b3(b1);   // b1 object value copy the b3 constructor
cout<<"\n The detail of b1:"<<endl;
b1.show();
cout<<"\n The detail of b2:"<<endl;
b2.show();
cout<<"\n The detail of b3:"<<endl;
b3.show();
}
