#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
};
int main(){
	
//create car object for carobj1
car carobj1;
carobj1.brand="BMW";
carobj1.model="X5";
carobj1.year=1999;
//create another obj for car
car carobj2;
carobj2.brand="ford";
carobj2.model="Musting";
carobj2.year=1962;
//print attributes values

cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;


return(0);
}
