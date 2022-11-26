//This is Writing programe for file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
fstream fout("test.dat",ios::out|ios::binary);
if(fout.is_open())
{
cout<<"Hello\n programming"<<endl;//for data output
fout<<"1234"<<endl;//for file output
cout<<"Writing is successful"<<endl;

}
else 
{

    cout<<"File opening error"<<endl;
}
fout.close();
system("pause");
return 0;
}