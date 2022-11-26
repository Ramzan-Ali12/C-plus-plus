#include<iostream>
using namespace std;
class Box {
public:
double getVolume(void){
return length * breadth * height;
}
		
void setLength (double Len) {
length=Len;
}

void setBreadth(double bre) {
breadth=bre;
}

void setHeight(double hei) {
height=hei;
}	
// Overload + operator to add two Box objects.
Box operator+(const Box& b){
Box box;
box. length=this->length +b. length;
box. breadth=this->breadth +breadth;
box. height=this->height +height;
return box;
}		
private:
double length;// Length of a box
double breadth;// Breadth of a box
double height;// Height of a box
};
// Main function for the program
int main () {
Box b1;// Declare Box1 of type Box
Box b2;// Declare Box2 of type Box
Box b3;// Declare Box3 of type Box
double volume =0.0;// Store the volume of a box here
// box 1 specification
b1.setLength(6.0);
b1.setBreadth(7.0);
b1.setHeight(5.0);
// box 2 specification
b2.setLength(12.0);
b2.setBreadth(13.0);
b2.setHeight(10.0);
// volume of box 1
volume=b1.getVolume();
cout<<"Volume of Box1: "<< volume <<endl;
// volume of box 2
volume=b2.getVolume();
cout<<"Volume of Box2: "<< volume <<endl;
// Add two object as follows:
b3=b1+b2;
// volume of box 3
volume=b3.getVolume();
cout<<"Volume of Box3: "<< volume <<endl;
return 0;
}

