#include <iostream>
using namespace std;

int main() {
	int a,b,c,max;
	cout<<"ehnii toog ug:";
	cin>>a;
	cout<<"2dh toog ug: ";
	cin>>b;
	cout<<"3dahi toog ug";
	cin>>c;
	if(a%2==0){
		a=1;
	}
	
	else{
		a=a;
	}
	if(b%2==0){
		b=1;
	}
	else
	{
		b=b;
	}
	if(c%2==0){
		c=1;
	}
	else{
		c=c;
	}
	cout<<"niilber: "<<a*b*c;

	return 0;
}
