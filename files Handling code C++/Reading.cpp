//This is Reading programe form file 
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream obj;//fstream is a class and we make a object for input
    obj.open("test.dat",ios::in|ios::app|ios::binary);
    if(!obj)
    {
        cout<<"file opening error";
    }
    else
    {
        char ch;
        while(!obj.eof())
        {
            obj>>ch;
            cout<<ch;
        }
        obj.close();
    }
    return 0;
}