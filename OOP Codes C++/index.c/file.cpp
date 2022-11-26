//programe writing object data to disk and reading object data From Disk
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Book
{
private:
int bookid;
char title[20];
float price;
public:
//Declare constructor
Book()
{
    bookid=0;
    strcpy(title,"no title");
    price=0;
}
//Get data from user
void getbookdata()
{
    cout<<"enter bookid,title and price of a book"<<endl;
    cin>>bookid;
    //to ignore the no title and take title from user
    cin.ignore();
    //set the length of the title
    cin.getline(title,19);
    cin>>price;
}
//show data of user
void showbookdata()
{
    cout<<bookid<<" "<<title<<" "<<price<<endl;
}
int storebook();
void viewallbooks();
};
//Reading an object data from disk
void Book::viewallbooks()
{
    ifstream fin;
    fin.open("home.dat",ios::in|ios::binary);
    //check the file is present or not
    if (!fin)
        cout<<"file not found";
    else
    {
        //type casting of object adress
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showbookdata();
          fin.read((char*)this,sizeof(*this)); 
        }
        fin.close();
    }
}
//writing an object data to Disk
int Book::storebook()
{
    if(bookid==0&&price==0)
    {
        cout<<"Book data not initialized"<<endl;
        return(0);
    }
    else
    {
        ofstream fout;
        fout.open("home.dat",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return(1);
    }
}
int main()
{
/*Book b1,b2;
b1.getbookdata();
b1.showbookdata();
b1.storebook();
b2.storebook();
b2.showbookdata();*/
Book b1;
b1.viewallbooks();
return 0;
}