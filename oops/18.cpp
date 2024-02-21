/*
home work

*/

#include<iostream>
using namespace std;
class calculator{
	protected:
		double a,b;
	public:
		void get_data(int x,int y){
			a=x;
			b=y;
		}		
};
class cal:public calculator{
	public:
		void print_data(){
			cout<<"\n sum is : "<<a+b<<"\n substraction is : "<<a-b<<"\n multiplication is : "<<a*b<<"\n division is : "<<a/b;
		}
};

int main(){
	int m,n;
	cout<<"\n enter m : ";cin>>m;
	cout<<"\n enter n : ";cin>>n;

	cal p1;

	p1.get_data(m,n);
	p1.print_data();

}