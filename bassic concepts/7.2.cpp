/*
7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
*/

#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"\n class A";
		}
		A(int x, int y){
			cout<<"\n X + Y : "<<x+y<<"\t constructor in A ";
		}
};
class B:public A{
	public:
		B(){
			cout<<"\n class B";
		}
		// syntax to access constructor of A using B 
		// it passess value x and value y to constructor of A 
		B(int z,int x, int y):A(x,y){
			cout<<"\n Z = "<<z<<"\t\t constructor in B";
		}	
};
class C:public B{
	public:
		C(){
			cout<<"\n class C";
		}
		// syntax to access costrucctor of B using C
		// it passess value x, value y and value z to constructor of B 
		C(int x, int y, int z):B(x,y,z){
			cout<<"\n constructor in C";
		}
};

int main(){
	/* in multilevel inheritance default constmructor of all class can be accessible by last class of inheritance 
	(if constructor have public access)*/
	C obj1;


	B obj2(10,20,30);
	cout<<"\n";
	C obj3(1,2,3);

}