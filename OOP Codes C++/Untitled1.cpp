#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
/*class Student {
  private:
    int scores[5];
    int sum;
  public:
    Student(){
    	sum=0;
	}
    int calculateTotalScore() {return sum;}
    void input() {
    	int n=0;
    	cout<<"enter score  students"<<endl;
    	cin>>n;
        for(int i=0; i<n; i++) {
            cin >> scores[i];
            
            sum+=scores[i];
        }
    }*/
    class Student {
    private:
    vector<int> scores = vector<int>(5);
    
    public:
    void input() {
        for (int i = 0; i < 5; i++)
            cin >> scores[i];
    }
    
    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += scores[i];
        return sum;
    }
};

int main()
{
Student b1;
b1.calculateTotalScore();
b1.input();
}
