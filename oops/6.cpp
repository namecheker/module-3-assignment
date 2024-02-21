/*
class work
*/

#include<iostream>
using namespace std;
class value{
	private:
		int x;
	public:
		value(int a){
			x=a;
		}	
		void square(){
			cout<<"\n square is "<<x*x;
		}
		void qube(){
			cout<<"\n cube is "<<x*x*x;
		}
};
int main(){
	int b;
	cout<<"\n Enter the value of b :";cin>>b;
	value v1(b);
	v1.square();
	v1.qube();
}


