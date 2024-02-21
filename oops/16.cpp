/*
class work

*/

#include<iostream>
using namespace std;
class Distance{
	public:
		int feet,inches;
		Distance(int x, int y){
			feet = x;
			inches = y;
		}
		Distance operator-(){
			feet = -feet-feet;
			inches = -inches;
		}
		void print_data(){
			cout<<"\n feet = "<<feet;
			cout<<"\n inches = "<<inches;
		}
};
int main(){
	Distance d1(10,20);
	-d1;
	d1.print_data();
}

 
