/*
class work

*/

#include<iostream>
using namespace std;
class A{
	public:
	static int count;
	static void increment(){
		count++;
	}
};
int A::count=0; 

int main(){
	A ob1,ob2,ob3;

	cout<<"\n object 1 data : "<<ob1.count;
	cout<<"\n object 2 data : "<<ob2.count;
	cout<<"\n object 3 data : "<<ob3.count;

	ob1.increment();

	cout<<"\n object 1 data : "<<ob1.count;
	cout<<"\n object 2 data : "<<ob2.count;
	cout<<"\n object 3 data : "<<ob3.count;
}


