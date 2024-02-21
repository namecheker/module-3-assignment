/*
1. Write a program of to swap the two values using template
*/

#include<iostream>
using namespace std;

template<typename v>
void swap_number(v &a,v &b){
	swap(a,b);
}

int main(){
	int a,b;
	cout<<"\n Enter value of a :";cin>>a;
	cout<<" Enter value of b :";cin>>b;
	swap_number(a,b);
	cout<<"\n a = "<<a<<" b = "<<b;
}
