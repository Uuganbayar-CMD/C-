#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	cout<<"sekunt ug:";
	cin>>a;
	b=a/60/60;
    c=a-b*60*60;
    d=c/60;
    e=a-d*60-b*60*60;
	
	cout<<"tsag:"<<b<<"minut: "<<d<<"sekunt: "<<e;
	// your code here

	return 0;
}
