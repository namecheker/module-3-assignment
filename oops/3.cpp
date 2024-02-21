/*
class work

*/

#include<iostream>
using namespace std;
class vehical{
	protected:
		virtual void engine()=0;
		virtual void speed()=0;
		virtual void wheel()=0;
};
class car{
	public:
		void engine(){
			cout<<"\n car engine";
		}
		void speed(){
			cout<<"\n car speed";
		}
		void wheel(){
			cout<<"\n car wheel";
		}
		void color(){
			cout<<"\n car color";
		}
};
class bike{
	public:
		void engine(){
			cout<<"\n bike engine";
		}
		void speed(){
			cout<<"\n bike speed";
		}
		void wheel(){
			cout<<"\n bike wheel";
		}
		void kick(){
			cout<<"\n bike kick";
		}
};
int main(){
	car c1;
	bike b1;	

	c1.engine();
	c1.speed();
	c1.wheel();
	c1.color();
	cout<<"\n";
	b1.engine();
	b1.speed();
	b1.wheel();
	b1.kick();

}


