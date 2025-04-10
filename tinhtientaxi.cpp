#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	double x,tien,x2,x3;
	cin>>x;
	if (x<=0.7) {
		tien=12500;
	}
	else if (x<31) {
		tien=12500; x2=x-0.7;
		tien=tien+(ceil(x2)*17000);
	}
	else if (x>=31) {
		tien=12500; x2=x-0.7;
		tien=tien+(30*17000); x3=x2-30;
		tien=tien+(ceil(x3)*14000);
	}
	cout<<fixed<<setprecision(0)<<tien;
	return 0;
}
