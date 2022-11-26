#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class String
{
private:
	char str[100];
	public:
		String()
{
	str[0]='\0';
}	
		void input()
		{
			cout<<"enter string"<<endl;
			cin>>str;

		}
		void show()
		{
		cout<<"concating two string is"<<endl<<str<<endl;
		}
	String operator+(String s)
	{
	String temp;
	strcpy(temp.str,str);
  	strcat(temp.str,s.str);
	return temp;	
	}
};
int main()
{
	String c1,c2,c3;
	c1.input();
	c2.input();
	c3=c1.operator+(c2);//c3=c1+c2
	c3.show();
	return 0;
}
