#include<iostream>
#include<fstream>
using namespace std;
class car
{
    protected:
char name[10];
short roll_number;
int year;
public:
void getdata()
{
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter Roll number"<<endl;
    cin>>roll_number;
    cout<<"enter year"<<endl;
    cin>>year;
}

};
int main(){
car obj;
obj.getdata();
ofstream fout;
fout.open("ram.dat",ios::binary);
fout.write((char*)&obj,sizeof(obj));
return 0;
}