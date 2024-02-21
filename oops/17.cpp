/*
home work

*/

#include<iostream>
using namespace std;
class A{
	public:
		int a=0,b=0;

		A(){
			cout<<"\n welcome to jungle";
		}
		A(int x,int y){
			a=x;
			b=y+1;
		}
		void print(){
			cout<<"\n Value of a is "<<a;
			cout<<"\n Value of b is "<<b;
		}
};

int main(){
	A x1;			// default constractor will call
	int a,b=10;

	cout<<"\n Enter value of M :";cin>>a;
	A x2(a,b);		// it calles parameterised constractor
	cout<<"\n m = "<<a;
	x1.print();		// output is " 0 "
	x2.print();		// output is " m(value) "
	A x3;			// it calles default constractor
//	x3.print();
//	A x4;
//	x4.print();
//	A x5;
//	x5.print();
}




