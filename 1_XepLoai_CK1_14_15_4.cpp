#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float qt,ck;
	float tb;
		cin>>qt>>ck;
		tb=(qt+ck)/2;
		if ((tb>=8) && (qt>=7) && (ck>=7)) {
			cout<<"1"; 
		} else if ((tb>=8) && ((qt<7) || (ck<7))) {
			cout<<"2"; 
		} 
		else if ((tb>=6.5) && (qt>=6) && (ck>=6)) {
			cout<<"2"; 
		} else if ((tb>=6.5) && ((qt<6) || (ck<6))) {
			cout<<"3"; 
		} 
		else if (tb>=5) {
			cout<<"3"; 
		} else { 
		cout<<4*235000;
		}
	return 0;
}
	
