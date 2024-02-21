/*
1. Write a program to find the multiplication values and the cubic values using inline function
*/

#include<iostream>
using namespace std;
class A{
	public:
		inline void multiplication(int x){
			cout<<" Multiplication value of "<<x<<" is "<<x*x;
		}
		inline void qubic(int x){
			cout<<" cubic value of "<<x<<" is "<<x*x*x;
		}
};

int main(){
	A m1;
	int a,b;
	cout<<"\n Enter value to find multiplication value : ";cin>>a;
	m1.multiplication(a);
	cout<<"\n\n Enter value to find qubic value :";cin>>b;
	m1.qubic(b);	
}