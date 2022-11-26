#include <iostream>
using namespace std;
class Mammal {

public:
	void eat() {

		cout << "Mammals eat...";
	}

};

class Cow: public Mammal {

public:
	void eat() {

		cout << "Cows eat grass...";
	}
};
int main() {

 Cow obj;

	obj.eat();

	return 0;

}
