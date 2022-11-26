#include<iostream>
#include<fstream>
using namespace std;
int main() 
{
ofstream fout;
fout.open("simple.txt");
if(fout)
{
cout<<"File is successfuly open"<<endl;
fout<<"This is file handling code"<<endl;
}
else
cout<<"file opening error"<<endl;

fout.close();
system("pause");
return 0;
}

