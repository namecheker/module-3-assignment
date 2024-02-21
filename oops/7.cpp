/*
class work

*/

#include<iostream>
using namespace std;
class A{
	public:
		void myfun();
};
// scope resolution operator 
void A::myfun(){	
	cout<<"\n class A function";
}
int x=50;		// global variable 

int main(){
	int x=10;	// local variable 

	cout<<"\n local x = "<<x;
	cout<<"\n global x = "<<::x;

	A obj;
	obj.myfun();
}



