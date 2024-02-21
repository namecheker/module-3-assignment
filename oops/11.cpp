
// class work 



#include<iostream>
using namespace std;
class A{
	public:
		int rollno,m,s,e;
		void get_data(int a,int b,int c,int d){
			rollno=a;
			m=b;
			s=c;
			e=d;
		}

};
class B:public A{
	public:
	int sp_marks;
	void get_sp_marks(){
		cout<<"\n sports marks:";cin>>sp_marks;
	}
};
class C:public B{
	public:
	int total;
	void result(){
		cout<<"\n result:"<<m+s+e+sp_marks;
	}
};
int main(){
	C c1;
	c1.get_data(1,10,20,30);
	c1.get_sp_marks();
	c1.result();
}

