#include <iostream>
#include<string.h>
using namespace std;
class TV
{
private:
    float price;
    char Brandname[20],TVModel[17];
public:
    TV(char b[],char m[],float p)
    {
        strcpy(Brandname,b);
        strcpy(TVModel,m);
        price=p;
    }
    void display()
    {
        cout<<"Model Name is :"<<TVModel<<endl;
        cout<<"Brand Name is :"<<Brandname<<endl;
        cout<<"TV price is :"<<price<<endl;
    }
    void changevalue(char b[],char m[],float p)
    {
        strcpy(Brandname,b);
        strcpy(TVModel,m);
        price=p;

    }

};
int main()
{
TV t("Hair","SDTV",30000);
cout<<"------object value is-------"<<endl<<endl;
t.display();
t.changevalue("SONY","HDTV",24000);
cout<<"------After change method object value is---------"<<endl<<endl;
t.display();
}
