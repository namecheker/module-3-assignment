/*
m4
x.1). WAP to create simple calculator using class
*/

#include<iostream>
using namespace std;
class calculator{
	private:
		// data
		int a,b;
	public:
		// functionality
		int sum(int a, int b){return a+b;}
		int sub(int a, int b){return a-b;}
		int mul(int a, int b){return a*b;}
		float div(int a, int b){return a/b;}
};

int main(){
	int a,b;
	calculator z1;
	cout<<"\n Enter the value of 'a' and 'b' : ";
	cin>>a>>b;
	
	cout<<"\n sum = "<<z1.sum(a,b);
	cout<<"\n substraction = "<<z1.sub(a,b);
	cout<<"\n multiplication = "<<z1.mul(a,b);
	cout<<"\n division = "<<z1.div(a,b);
	
}