#include<iostream>
#include<fstream>
using namespace std;
class car{
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
void showdata()
{
	cout<<"Name"<<name<<" "<<"Roll number"<<roll_number<<" "<<" Year"<<year;
}
protected:
char name[10];
short roll_number;
int year;
};
int main(){
car obj;
obj.getdata();
ofstream fout;
fout.open("ram.Dat",ios::binary);
fout.write((char*)&obj,sizeof(obj));
ifstream fin;
fin.open("ram.Dat",ios::binary);
obj.showdata();
return 0;
}
