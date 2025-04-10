#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long long x,a,b,c,d,money;
	cin>>x>>a>>b>>c>>d;
	if (x<=50) {
		money=x*a;
	} else if (x<=100 && x) {
		money=50*a+(x-50)*b;
	} else if (x<=150) {
		money=50*a+(50*b)+(x-100)*c;
	} else {
		money=50*a+(50*b)+(50*c)+(x-150)*d;
	}
cout<<money;	
	return 0;
}
