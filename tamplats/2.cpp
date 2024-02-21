/*
2. Write a program of to sort the array using templates
*/


#include<iostream>
using namespace std;

template<typename p>
 void accending(p c[]){
 	int i,j,k,b;
 	//assending order
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]>c[j]){
				b=c[i];
				c[i]=c[j];
				c[j]=b;
			}
		}
	}
	for(k=0;k<5;k++){
		cout<<"\t"<<c[k];
	}
 }

template<typename p>
void decending(p c[]){
 	int i,j,k,b;
 	// decending order
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(c[i]<c[j]){
				b=c[i];
				c[i]=c[j];
				c[j]=b;
			}
		}
	}
	for(k=0;k<5;k++){
		cout<<"\t"<<c[k];
	}
 }

int main(){
	int q,a[5],i;

	for(i=0;i<5;i++){
		cout<<" Enter a["<<i<<"] : ";cin>>a[i];
	}

	cout<<"\n 1). print in accending order \n 2). print in decending order\n      ";cin>>q;
	if(q==1){
		accending(a);	
	}else if(q==2){
		decending(a);	
	}else{
		cout<<"\n wrong choice";	
	}
}
