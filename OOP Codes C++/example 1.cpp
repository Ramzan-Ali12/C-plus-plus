#include<iostream>
using namespace std;
class Myclass
{
	public://access specificer
		int mynum;   //its attributes
		string mystring;
};
int main(){
Myclass myobj;
//create object of class
myobj.mynum=15;
myobj.mystring="some text";
//print attribute values
cout<<myobj.mynum<<endl;
cout<<myobj.mystring<<endl;
return(0);
}
