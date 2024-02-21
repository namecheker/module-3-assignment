/*
class work

*/

#include<iostream>
using namespace std;
class A{
	public:
		int a;	
		void funA(){
			cout<<"\n class A function "<<a;
		}
};
class B:public A{
	public:
		int b;	
		void funB(){
			cout<<"\n class B function "<<b;
		}
};

int main(){
	B objB;
	objB.a=10;
	objB.b=20;
	objB.funA();
	objB.funB();
}

 
