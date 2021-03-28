#include <iostream>
using namespace std;

int main() {
    int urt, urgun, undur;
    cout<<"urtiig oruul: ";
    cin>>urt;
    cout<<"urguniig oruul: ";
    cin>>urgun;
    cout<<"unduriig oruul: ";
    cin>>undur;
    cout<<"S suuri: \t"<<urt*urgun;
    cout<<"S nuur: \t"<<urt*undur;
    cout<<"S hajuu: \t"<<urgun*undur;
    cout<<"S niit: \t"<<(urt*urgun+urt*undur+urgun*undur)*2;
    cout<<"V= "<<urgun*urt*undur;
	return 0;
}
