/*
class work
*/

#include<iostream>
using namespace std;
class val{
	protected:
		double a,b;

	public:
		void get_data(int x, int y){
			a=x;
			b=y;
		}
};
class sum:public val{
	public:
		void print_sum(){
			cout<<"\n A+B : "<<a+b;		
		}
};
class sub:public val{
	public:
		void print_sub(){
			cout<<"\n A-B : "<<a-b;		
		}
};
class mul:public val{
	public:
		void print_mul(){
			cout<<"\n A*B : "<<a*b;		
		}
};
class div:public val{
	public:
		void print_div(){
			cout<<"\n A/B : "<<a/b;		
		}
};
int main(){
	sum s1;
	s1.get_data(10,20);
	s1.print_sum();

	sub s2;
	s2.get_data(40,30);
	s2.print_sub();

	mul m1;
	m1.get_data(10,10);
	m1.print_mul();

	div d1;
	d1.get_data(20,40);
	d1.print_div();

}


