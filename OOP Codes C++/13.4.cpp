#include<iostream>
using namespace std;
class Book{
private:
	int Bookid,pages,price;
//	float price;
	public:
	void get(){
	cout<<"enter bookid"<<endl;
	cin>>Bookid;
	cout<<"enter pages"<<endl;
	cin>>pages;
	cout<<"enter price"<<endl;
	cin>>price;
	}
	void show(){
	cout<<"Bookid="<<Bookid<<endl;
	cout<<"pages="<<pages<<endl;
	cout<<"price="<<price<<endl;
	}
	void set(int id,int pg,float pr){
		Bookid=id;
		pages=pg;
		price=pr;
	}
	float getprice(){
		return price;
	}
};
int main()
{
Book b1,b2;
b1.get();
b2.set(2,150,700);
cout<<"The details of most costly book is as follows"<<endl;
if(b1.price()>b2.price)
b1.price;
else
b2.price;
return(0);
}
