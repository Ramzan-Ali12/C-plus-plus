
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;
class runner {
public:
   string name;
  long dist;
  runner() {
    name = " ";
    dist = 0;
  }
  void get() {
    cout << "Enter Name and Distance:";
    cin>>name>>dist;
  }
  void display() {
    cout << "\n Name:" << name;
    cout << "\n Distance traveled:" << dist;
  }
};

int main() {
  runner r1, r2;
  r1.get();
  r2.get();
  cout << "This runner has covered longer distance:";
  if (r1.dist > r2.dist)
    r1.display();
  else
    r2.display();
  return 0;
}
