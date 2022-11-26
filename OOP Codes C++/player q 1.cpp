#include <iostream>
#include<string.h>
using namespace std;
class player
{
private:
    float avg;
    char name[50],team[40];
public:
    player()
    {
        cout<<"enter player name"<<endl;
        cin>>name;
        cout<<"enter team name"<<endl;
        cin>>team;
        cout<<"enter average"<<endl;
        cin>>avg;
    }
    void get()
    {
        cout<<"enter player name"<<endl;
        cin>>name;
        cout<<"enter team name"<<endl;
        cin>>team;
        cout<<"enter average"<<endl;
        cin>>avg;
    }
    void show()
    {
        cout<<"Player Name="<<name<<endl;
        cout<<"Team name="<<team<<endl;
        cout<<"Average="<<avg<<endl;

    }
    void change(char n[],float a,char t[])
    {
        strcpy(name,n);
        avg=a;
        strcpy(team,t);
    }
};
int main()
{
player p1;
cout<<"----Before changing the team player----"<<endl;
p1.show();
p1.change("yousf",80.30,"pakistan");
cout<<"----After changing the team player----"<<endl;
p1.show();
return(0);

}

