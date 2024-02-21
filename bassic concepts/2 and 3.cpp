/*
m4
x2. Define a class to represent a bank account. Include the following members:
x3.	Data Member:
	  -Name of the depositor
	  -Account Number
	  -Type of Account
	  -Balance amount in the account
	Member Functions
	  -To assign values
	  -To deposited an amount
	  -To withdraw an amount after checking balance
	  -To display name and balance
*/

#include<iostream>
using namespace std;
class bankaccount{
	private:
		// data
		char name[20],type_of_acc[20];
		int account_no;
		float balance,amount;
	public:
		// functionality
		void asign_value(){
			cout<<"\n Enter name : "; cin>>name;	
			cout<<" Enter account number : "; cin>>account_no;
			cout<<" Enter type of account : "; cin>>type_of_acc;
			cout<<" Enter opening balance : "; cin>>balance;
		}
		void print_value(){
			cout<<"\n Account holder name : "<<name;
			cout<<"\n Account number : "<<account_no;
			cout<<"\n Account balance : "<<balance;
		}
		void deposite(){
			cout<<"\n Enter amount to deposite : ";cin>>amount;
			balance=balance+amount;
		}
		void withdraw(){
			cout<<"\n Your account balance : "<<balance;
			cout<<"\n Enter amount to withdraw : ";cin>>amount;
			if(balance>amount){
				balance=balance-amount;	
			}else{
				cout<<"\n insuficient balance";
			}
		}
};

int main(){
	int a,b,c;
	char d=3;
	bankaccount b1;
	cout<<"\n 1). Add account\n 2). exit \n\t\t";cin>>a;
	if(a==1){
		b1.asign_value();
	}else{
		goto last;
	}
	again:
	cout<<"\n 1). Check balance\n 2). Deposite\n 3). Withdraw\n\t\t";cin>>b;
	switch(b){
		case 1:{b1.print_value();break;}
		case 2:{b1.deposite();break;}
		case 3:{b1.withdraw();break;}
		default:{cout<<"\n Wrong choise"; break;}
	}
	cout<<"\n\n 1). banking \n 2). exit";cin>>c;
	if(c==1){
		goto again;
	}
last:
	cout<<"\n"<<d<<" Thank you "<<d;
}