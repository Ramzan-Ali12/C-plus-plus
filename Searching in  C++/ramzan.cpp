#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    char ch;
    double d;
ifstream file("test.txt");
if(!file.is_open())
{
	file>>n>>ch>>d;
cout<<"The contents of file are as follows"<<endl;
cout<<n<<endl<<ch<<endl<<d<<endl;
cout<<"Contents is display successfully";
}
else
{
	cout<<"Access denied"<<endl;
}

file.close();
//system("pause");
return 0;
}
