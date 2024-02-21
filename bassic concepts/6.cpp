/*
m4
x6). Write a C++ program to create a class called Person that has private
	member variables for name, age and country. Implement member
	functions to set and get the values of these variables
*/

#include<iostream>
using namespace std;

class person{
	private:
		// data
		char name[20],country[20];
		int age;
	public:
		// functionality
		void get_data(){
			cout<<"\n Enter name of person : "; cin>>name;
			cout<<" Enter person's age : "; cin>>age;
			cout<<" country name : "; cin>>country; 
		}
		void print_data(){
			cout<<"\n Name : "<<name;
			cout<<"\n age : "<<age;
			cout<<"\n country : "<<country;
		}
};

int main(){
	person p1;
	p1.get_data();
	p1.print_data();
}