#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
	int main() {
		double r,dt;
		double const pi{3.14};
			cin>>r;
			dt=(pi*pow(r,2));
			cout<<fixed<<setprecision(2)<<dt;
			
			
		return 0;
	}
