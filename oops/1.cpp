/*
class work 
01_02_24
*/

#include<iostream>
using namespace std;
class complex{
	public:
		int a,b;

		void get_value(){
			cout<<"\n a :";cin>>a;
			cout<<"\n b :";cin>>b;
		}
		complex operator+(complex ob){
			complex t;
			t.a = a+ob.a;
			t.b = b+ob.b;
			return(t);
		}
		complex operator-(complex ob){
			complex t;
			t.a = a-ob.a;
			t.b = b-ob.b;
			return(t);
		}

		void print_value(){
			cout<<"\n a = "<<a<<"\n b = "<<b;
		}
};


int main(){
	complex obj1,obj2,result,result1;

	obj1.get_value();
	obj2.get_value();

	result=obj1+obj2;
	result.print_value();

	result1=obj1-obj2;
	result1.print_value();


}




