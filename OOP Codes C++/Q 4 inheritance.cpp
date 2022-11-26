#include<iostream>
using namespace std;
class Book
{
private:
	int Bookid,price;
	char name[100];
	public:
		void input()
		{
			cout<<"enter Bookid"<<endl;
			cin>>Bookid;
			cout<<"enter Book name"<<endl;
			cin>>name;
			cout<<"enter price of Book"<<endl;
			cin>>price;
		}
		void show()
		{
		cout<<"BookID"<<Bookid<<endl;
		cout<<"Name"<<name<<endl;
		cout<<"price"<<price<<endl;
	}
};
class writer
{
	private:char name[100],adress[100];
	int books;
	Book bk[5];
	public:
		void input()
		{
			cout<<"enter name of writer"<<endl;
			cin>>name;
			cout<<"enter adress of writer"<<endl;
			cin>>adress;
			cout<<"enter number of books written:"<<endl;
			cin>>books;
			cout<<"enter Detail of five books"<<endl;
			for(int i=0;i<5;i++)
			bk[i].input();
		}
		void show()
		{
		cout<<"Name="<<" "<<name<<endl;
		cout<<"Adress="<<" "<<adress<<endl;
		cout<<"Books="<<" "<<books<<endl;
		cout<<"Detail of five books"<<endl;
		for(int i=0;i<5;i++)
		bk[i].show();
		}
};
int main()
{
writer obj;
obj.input();
obj.show();
return 0;
}
