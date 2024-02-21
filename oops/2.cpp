/*
class work
01_02_24
*/

#include<iostream>
using namespace std;
class A{
	public:
		virtual void funA(){
			cout<<"\n hello.....";
		}
};
class B{
	public:
		void funA(){
			cout<<"\n good morning ... ";
		}
};

int main(){
	B obj;
	obj.funA();
}

 
