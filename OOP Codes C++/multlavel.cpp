//Multilavel inheritance in c++ simple example
#include <iostream>
#include<string.h>
using namespace std;
class person
{
protected:
    int id;
    char name[50],adress[100];
public:
    person()//constructor of parent class
    {
        id=0;
        name[0]='\0';
        adress[0]='\0';
    }
    void input()
    {
        cout<<"enter your id"<<endl;
        cin>>id;
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter your adress"<<endl;
        cin>>adress;
    }
    void output()
    {
        cout<<"personal information :"<<endl;
        cout<<"id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"adress="<<adress<<endl;
    }
};
class student:public person
{
private:
    int rno,marks;
public:
    student()
    {
        rno=0;
        marks=0;
    }
    void input()
    {
        person::input();
        cout<<"enter your roll no"<<endl;
        cin>>rno;
        cout<<"ente your marks"<<endl;
        cin>>marks;
    }
    void output()
    {
     person::output();
     cout<<"Educational information"<<endl;
     cout<<"Roll NO="<<rno<<endl;
     cout<<"Marks="<<marks<<endl;
    }
};
class scholarship:public student
{
   private:
    char sname[100];
    int amount;
   public:
    void input()
    {
        student::input();
        cout<<"enter scholarship name"<<" "<<endl;
        cin>>sname;
        cout<<"enter scholarship amount"<<" "<<endl;
        cin>>amount;
    }
    void output()
    {
        student::output();
        cout<<"scholarship information"<<endl;
        cout<<"Scholarship name"<<sname<<endl;
        cout<<"scholarship amount"<<amount<<endl;

    }
};
int main()
{
 scholarship obj;
 obj.input();
 obj.output();
}

