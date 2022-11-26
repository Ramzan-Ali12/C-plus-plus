#include<iostream>
using namespace std;
class computer
{
protected:
int wordsize,memorysize,speed;
double storagesize;
public:
computer(){} //default constructor
computer(int wdsiz,int memsiz,double storsiz,int spd);
void show();
};
class laptop:public computer
{
private:
double length,width,height,weight;
public:
laptop() //Default constructor
{
}
laptop(double len,double wit,double ht,double wt)
{
length=len;
width=wit;
height=ht;
weight=wt;
}
	void show()
	{
		//computer::show()
		cout<<"length="<<length<<endl;
		cout<<"width="<<width<<endl;
		cout<<"Height="<<height<<endl;
		cout<<"weight="<<weight<<endl;
		}	
};
computer::computer(int wdsiz,int memsiz,double storsiz,int spd)
{
	wordsize=wdsiz;
	memorysize=memsiz;
	storagesize=storsiz;
	speed=spd;
}
void  computer::show()
{
	cout<<"Wordsize="<<wordsize<<endl;
	cout<<"Memorysize="<<memorysize<<endl;
	cout<<"storagesize="<<storagesize<<endl;
	cout<<"speed"<<speed<<"Mhz"<<endl;
	}	
laptop(double len,double wit,double ht,double wt):computer(int memsize, int wdsize,storsize,spd)
{
	length=len;
	width=wid;
	height=hei;
	weight=wei;
}

int main()
{
computer comp(3,1024,512,40);
laptop lap(8,1024,50,2,15,19,14,2);
cou<<"computer specificatio is"<<endl;
comp.show();
cou<<"laptop specificatio is"<<endl;
lap.show();
return 0;
}
