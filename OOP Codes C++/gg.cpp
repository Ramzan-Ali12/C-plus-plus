#include <iostream>
using namespace std;

int main()
{
    int n[10], temp;

    cout << "Enter 10 number: " << endl;
    for(int i = 0; i < 10; ++i)
    {
      cin>>n[i];
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (n[j] > n[j + 1]) {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << n[i] << endl;
    }
    return 0;
}
