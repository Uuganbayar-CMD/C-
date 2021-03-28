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
	if(a>b){
		max=a;
	}
	
	else{
		max=b;
	}
	if(max>c){
		max=max;
	}
	else
	{
		max=c;
	}
	cout<<"ih: "<<max;

	return 0;
}
