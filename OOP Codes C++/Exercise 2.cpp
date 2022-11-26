#include<iostream>
#include<String.h>
using namespace std;
class Bank
{
	private:
		char name[100],actype[100];
		int actno;
		int bal;
		public:
			Bank()
			{
			cout<<"Enter Account name"<<endl;
			cin>>name;
			cout<<"Enter Account type"<<endl;
			cin>>actype;
			cout<<"Enter Account no"<<endl;
			cin>>actno;
			cout<<"Enter Account Balance"<<endl;
			cin>>bal;
			}
			void deposit(int amt)
			{
			bal=bal+amt;
			cout<<"Balance after deposit is"<<bal<<endl;
			}
			void withdraw(int amt)
			{
				if(amt>bal)
				cout<<"Not enough Balance in account"<<endl;
				else
			{
					
				bal=bal-amt;
				cout<<"Balance after withdraw is"<<bal<<endl;
			}
			}
			void display()
			{
			cout<<"Name is"<<" "<<name<<endl;
			cout<<"Account type is"<<" "<<actype<<endl;
			cout<<"Account no"<<" "<<actno<<endl;
			cout<<"Current account balance"<<" "<<bal<<endl;
			}
			void add(Bank b1)
			{
			bal=bal+b1.bal;//adds the balance of  one account to another
			}
		
};
int main()
{
	Bank x,y;
	x.add(y);
	x.display();
	
}
