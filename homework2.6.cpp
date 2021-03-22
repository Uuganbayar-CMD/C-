   #include<iostream>

using namespace std;

main(){
	int a, b, year, month, day;
	cout<<"udriig oruul:";
	cin>>a;
year=a/365;
b=a-year*365;
month=b/30;
day=b-month*30;
cout<<year<<endl;
cout<<month<<endl;
cout<<day;
}
