/*
5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

#include<iostream>
using namespace std;
class triangle{
	private:
		int s1,s2,s3;
	public:
		void get_data(){
			cout<<"\n Enter first side of triangle : ";cin>>s1;
			cout<<" Enter second side of triangle : ";cin>>s2;
			cout<<" Enter third side of triangle : ";cin>>s3;
		}
		//in equilateral triangle all sides are equal.In isosceles only two sides are equal, while in scelene non of sides are equal.
		void determine_tri(){
			if(s1==s2 && s2==s3){
				cout<<"\n triangle is equilateral";
			}else if(s1==s2 || s2==s3 || s1==s3){
				cout<<"\n Triangle is isosceles";
			}else{
				cout<<"\n Triangle is  scelene";
			}
		}
};

int main(){
	triangle t1;
	t1.get_data();
	t1.determine_tri();
}