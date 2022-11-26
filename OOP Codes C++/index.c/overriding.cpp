#include<iostream>
using namespace std;
class Computer{
    protected:
    int wordsize;
    int memorysize;
    double storagesize;
    int speed;
public:
Computer();
Computer(int wdsiz,int memsiz,double storsiz,int spd)
{
    wordsize=wdsiz;
    memorysize=memsiz;
    storagesize=storsiz;
    speed=spd;
}
void show()
{
    cout<<"word size"<<wdsiz<<endl;
    cout<<"Memory size"<<memsiz<<endl;
    cout<<"storage size"<<storsiz<<endl;
}
};
class laptop
{
private:
double length,width,height;
double weight;
public:
laptop();
laptop(int wdsize int memsiz double storsiz int spd double len double wid double ht double weit):Computer(wdsiz,memsiz,storsiz,spd)
{
    length=len;
    weight=wid;
    height=ht;
    weight=weit;

}
void show()
{
    cout<<"legth="<<len<<endl;
    cout<<"width="<<wid<<endl;
    cout<<"Height="<<ht<<endl;
    cout<<"weight="<<weit<<endl;
}

};
int main(){
Computer comp(4,512,20,2);
laptop lap(8,1024,50,3,15,19,14,2);
cout<<"computer specification"<<endl;
comp.show();
cout<<"laptop specification"<<endl;
lap.show();
return 0;
}