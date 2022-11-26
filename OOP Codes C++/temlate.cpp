#include<iostream>
using namespace std;
template<class z,class u>
u add(z a,u b){
	if(a>b)
	return a;
	else 
	return b;
}
int main(){
	float x,y,n;
	cout<<"enter values"<<endl;
	cin>>x>>y;	
	n=add(x,y);
	cout<<"maximum of two number is "<<n<<endl;
	return 0;
}

