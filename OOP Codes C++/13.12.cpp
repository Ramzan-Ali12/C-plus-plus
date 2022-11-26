#include<iostream>
using namespace std;
class Book
{
private:
int pg,price;
char title[50];
public:
void input()
{
	cout<<"Enter pages of book"<<endl;
	cin>>pg;
	cout<<"Enter price of book"<<endl;
	cin>>price;
	cout<<"Enter Tital of Book"<<endl;
	cin>>title;
}
void show()
{
cout<<"Title="<<title<<endl;
cout<<"Pages="<<pg<<endl;
cout<<"Price="<<price<<endl;
}
};
int main()
{
Book b1;
b1.input();
Book b2(b1);//this is copy constructor
Book b3=b1;//this is also a copy constructor
 cout<<"The details of b1 is"<<endl;
 b1.show();
 cout<<"The details of b2 is"<<endl;
 b2.show();
 cout<<"The details of b3 is"<<endl;
 b2.show();

}
