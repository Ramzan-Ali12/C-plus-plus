#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Book{
private:
int bookid;
char title[20];
float price;
public:
Book()
{
    bookid=0;
    strcpy(title,"no title");
    price=0;
}
void getbookdata()
{
    cout<<"enter bookid,title and price of a book"<<endl;
    cin>>bookid;
    cin.ignore();
    cin.getline(title,19);
    cin>>price;
}
void showbookdata()
{
    cout<<bookid<<" "<<title<<" "<<price<<endl;
}
int storebook();
};
int Book::storebook()
{
    if(bookid==0&&price==0)
    {
        cout<<"Book data not initialized";
        return(0);
    }
    else
    {
        ofstream fout;
        fout.open("file1.dat",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return(1);
    }
}
int main()
{
Book b1,b2;
b1.getbookdata();
b1.showbookdata();
b2.showbookdata();
return 0;
}
