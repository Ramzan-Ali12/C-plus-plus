#include <iostream>
using namespace std;
class Mammal {

public:
	void eat() {

		cout << "Mammals eat..."<<endl;
	}

};

class Cow: public Mammal {

public:
	void eat() {

		cout << "Cows eat grass..."<<endl;
	}
};
int main() {

 Cow obj;

	obj.eat();

	return 0;

}