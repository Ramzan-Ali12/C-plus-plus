#include<iostream> 
using namespace std;

class ComplexNum {
private:
	int  real, img;
public:
	ComplexNum(int rl=0 , int im=0 ) {
		real = rl;   
		img = im; 
	}

	ComplexNum operator + (ComplexNum &obj) {
//The obove adress operator without no error in the programe
		ComplexNum result;
		result.real = real + obj.real;
		result.img = img + obj.img;
		return result;
	}
	void print() { 
		cout << real << " + i" << img << endl; 
	}
};
int main()
{
	ComplexNum c1(4, 3), c2(2, 8),c3;
    //c3 = c1+c2;//this is overload operator
    c3=c1+c2;
    //c3=c1.operator+(c2). This is a second method of call a function or operator.
    //c1 calls +operator pass c2 as an argument then c2 return anything  stores in c3. 
	c3.print();
}