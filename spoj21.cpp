#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,min;
	cout<<"ehnii toog ug:";
	cin>>a;
	cout<<"2dh toog ug: ";
	cin>>b;
	cout<<"3dh toog ug: ";
	cin>>c;
	cout<<"4dh toog ug: ";
	cin>>d;
	
	if(a>b){
		min=a;
	}
	else{
		min=b;
	}
	if(min<c){
		min=min;
	}
	else{
		min=c;
	}
	if(min<d){
		min=min;
		
	}
	else{
		min=d;
	}
	cout<<"hamgiin baga: "<<min;

	return 0;
}
