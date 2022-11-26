//perform writing
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
ifstream fin("simple.txt");
if(!fin)
{
fin.get(ch);
cout<<"Hello programming "<<endl;
cout<<"Reading is successful"<<endl;
}
else
{
	cout<<"Error in Displaying"<<endl;
}
while(fin.eof())
{
cout<<ch;
fin.get(ch);
}
fin.close();
return 0;
}

