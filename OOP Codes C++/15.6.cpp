#include<iostream>
using namespace std;
class computer
{
	private:
	int wordsize;
	int memorysize;
	double storagesize;
	int speed;
	public:
		computer()
		{
		}
		computer(int wdsiz,int memsiz,double stsiz,int spd){
			wordsize=wdsiz;
			memorysize=memsiz;
			storagesize=stsiz;
			speed=spd;
			
		}
		void show(){
			cout<<"word size"<<" "<<wordsize<<endl;
			cout<<"memory size"<<" "<<memorysize<<endl;
			cout<<"storage size"<<" "<<storagesize<<endl;
			cout<<"speed"<<" "<<speed<<"MHZ"<<endl;
		}
};
class laptop:public computer 
{
	private:
	double length,width,hight;
	double weight;
	public:
	laptop(){}//Default constructor
laptop(int wdsiz,int memsiz,double stsiz,int spd,double len,double wid,double hit,double wht):computer( wdsiz,memsiz, stsiz, spd)
{
		length=len;
		width=wid;
		hight=hit;
		weight=wht;
	}
	void show()
	{
		computer::show();
		cout<<"length"<<" "<<length<<endl;
		cout<<"width"<<" "<<width<<endl;
		cout<<"height"<<" "<<hight<<endl;
		cout<<"weight"<<" "<<weight<<endl;
	}	
};   

int main()
{
	computer comp(4,512,20,2);
	laptop lap(8,1024,50,2,15,19,14,2);
	cout<<"computer specification"<<endl;
	comp.show();
	cout<<"laptop specification"<<endl;
	lap.show();
	return 0;
}

