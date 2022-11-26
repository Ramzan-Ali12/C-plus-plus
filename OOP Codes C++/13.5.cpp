#include<iostream>
#include<string.h>
using namespace std;
class car
{
	char name[50];
	char dir;
	int  pos;
public:
car()
{
	strcpy(name,"Noname");
	dir='E';
	pos=0;
}
void reset()
{
	cout<<"enter name of car"<<endl;
	cin>>name;
	cout<<"enter Direction of car"<<endl;
	cin>>dir;
	cout<<"enter position of a car"<<endl;
	cin>>pos;
}
void turn()
{
if (dir=='E')
	dir='S';
else if (dir=='s')
	dir='w';
else if (dir=='w')
	dir='N';	
}
void turn(char d)
{
dir=d;
}
void move(int d)
{
pos=pos+d;
}
void show()
{
cout<<"The name of the car is"<<" "<<name<<endl;
cout<<"The Dircetion of a car is"<<endl;
switch(dir)
{

case 'E':
	cout<<"East";
	break;
case 'w':
	cout<<"west";
	break;
case 's':
	cout<<"south";
	break;
case 'N':
	cout<<"North";
	break;		
}
cout<<"\n it standing at position"<<endl<<pos<<endl;
}
};
int main()
{
car x;
x.move(100);
x.reset();
x.show();
x.turn();
x.turn();
}
