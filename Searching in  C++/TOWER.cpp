// C++ recursive function to 
// solve tower of hanoi puzzle 
#include<iostream>
using namespace std;

void towerOfHanoi(int n, char BEG,
					char AUX, char END) 
{ 
	if (n == 1) 
	{ 
		cout << "Move disk 1 from rod " << BEG << 
							" to rod " << END<<endl; 
		return; 
	} 
	towerOfHanoi(n - 1,BEG,END,AUX); 
	cout << "Move disk " << n << " from rod " << BEG <<
								" to rod " << END<< endl; 
	towerOfHanoi(n - 1, AUX, BEG, END); 
} 

// Driver code
int main() 
{ 
	int n = 3; // Number of disks 
	towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods 
	return 0; 
} 

// This is code is contributed by rathbhupendra

