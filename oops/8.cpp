/*
class work

*/

#include<iostream>
using namespace std;
class A{
	public:
		int x,y;

		// default constructor has no arguments and no return type
		A(){
			cout<<"\n Default constractor";
		}

		// parameterised constructor takes parameter as arguments and have no return type 
		A(int a, int b){
			x=a;
			y=b;
		}
		// copy constructor is used to copy data from other object within same class (syntex is given below)
		// one can use any name after "&" sign but when asigning the object must need to use object's name
		A(const A &vij){
			x=vij.x;
			y=vij.y;
		}

		void print_data(){
			cout<<"\n x = "<<x<<"\n y = "<<y;
		}
		// destructor is declare with tilt(~) sign before the name
 		// destructor (destructor is same as constructor but it exicutes automatically when program ends)
 		// destructor does not parameterised  
		~A(){		
			cout<<"\n program end";
		}
};dd

int main(){
	A ob1(10,20);
	A ob2(ob1);		// asign object-1 to object-2  or object-1 as an argument of object-2 (for copy constructor)

	ob2.print_data();
	ob1.print_data();

}                                                        
 
