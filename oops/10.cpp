/*
class work

*/

#include<iostream>
#include<string.h>
using namespace std;
class student{
	protected:
		int rollno,m1,m2,m3;
		char name[50];

	public:
		void get_data(int rn, char nm[50],int n1, int n2, int n3){
			rollno=rn;
			strcpy(name,nm);
			m1 = n1; 
			m2 = n2;
			m3 = n3;
		}
};
class result:public student{
	public:
		void print_data(){
			cout<<"\n roll no : "<<rollno<<"\n name : "<<name<<"\n total : "<<m1+m2+m3;
		}
};

int main(){
	result a1;
	a1.get_data(19,"vijay",87,99,88);
	a1.print_data();
}



 
