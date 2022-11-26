#include <iostream>
#include<string.h>
using namespace std;
class student
{
private:
    static int r;
    int rno,marks;
    char name[50];
public:
    student()//deaclear constructor of class
    {
        r++;
        rno=r;
    }
    void in()
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter marks"<<endl;
        cin>>marks;

    }
    void show(){
    cout<<"Roll no"<<rno<<endl;
    cout<<"Name"<<name<<endl;
    cout<<"Marks"<<marks<<endl;

    }
};
int student::r=0;//defin static member variable
int main()
{
    student s1,s2,s3;
    s1.in();
    s1.in();
    s3.in();
    s1.show();
    s2.show();
    s3.show();
}

