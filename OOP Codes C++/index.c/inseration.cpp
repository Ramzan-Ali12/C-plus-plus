//overload inseration and extraction operator
#include<iostream>
using namespace std;
class student{
private:
int id;
char name[20];
public:
//This is the extraction operator overload
friend void operator >>(istream &in,student &s)
{
cout<<"enter student id and name"<<endl;
in>>s.id>>s.name;
}
//This is the inseration operator overload
friend void operator <<(ostream &out,student &s)
{
    cout<<"id="<<" "<<s.id<<endl;
    cout<<"Name=X"<<" "<<s.name<<endl;
}
};
int main(){
student s;
//calling function
cin>>s;
cout<<s;
return 0;
}