#include <iostream>
#include<string.h>
using namespace std;
class Bank
{
private:
    int actno,bal;
    char actype[30],name[30];
public:
    Bank()
    {
        cout<<"enter account name"<<endl;
        cin>>name;
        cout<<"enter account no"<<endl;
        cin>>actno;
        cout<<"enter opening balance"<<endl;
        cin>>bal;
        cout<<"enter account type"<<endl;
        cin>>actype;
        
    }
    void deposit(int amt)
    {
        bal=bal+amt;
        cout<<"Balance After deposit is"<<bal<<endl;
                 system("pause");

    }
    void withdraw(int amt)
    {
        if(amt>bal)
            cout<<"sorry you have insufficient Balance"<<endl;
        else
            bal=bal-amt;
        cout<<"Balance after withdraw is"<<bal<<endl;
                 system("pause");

    }
    void display()
    {
        cout<<"----Account Details----"<<endl;
        cout<<"Account name:"<<name<<endl;
        cout<<"Account no :"<<actno<<endl;
        cout<<"Opening account balance:"<<bal<<endl;
        cout<<"Account type :"<<actype<<endl;
                 system("pause");

    }
};
int main()
{
    Bank obj;
    int choice,amount;
    do
    {system("cls");
        cout<<"----Main Menu----"<<endl;
        cout<<"1:Deposit Money"<<endl;
        cout<<"2:withdraw Money"<<endl;
        cout<<"3:Display account details"<<endl;
        cout<<"4:Quit"<<endl;
        cout<<"enter any choice"<<endl;
        cin>>choice;
    
        switch(choice)
        {
        case 1:
        cout<<"enter amount to deposit"<<endl;
        cin>>amount;
        obj.deposit(amount);
       break;
    case 2:
        cout<<"enter amount to withdraw"<<endl;
        cin>>amount;
        obj.withdraw(amount);
        break;
    case 3:
        obj.display();
        break;
    case 4:
        exit(0);
        }
}
    
while(1);

}

