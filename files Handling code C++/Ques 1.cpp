#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int num,i;
fstream obj;
obj.open("true.txt",ios::in);
if(!obj.is_open())
{
    cout<<"could not create file";
 exit(1); 
}
else 
{
cout<<"The array contains the following values"<<endl;
for( i=1;i<=10;i++)
{
    obj>>num;
    cout<<num<<endl;
    if(i<10 && obj.eof())
    {
        cout<<"file is finished";
        break;
    }
}
}
obj.close();
system("pause");
return 0;



}