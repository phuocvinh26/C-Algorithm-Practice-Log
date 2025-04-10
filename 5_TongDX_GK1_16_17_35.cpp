#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main() {
	long long s,n,i,m,length,length2,phantu; i=0; s=0; phantu=1;
	cin>>n;
	m=n;
	if (n<10) {
		length=1;
	} 
	else if (n<100) {
		length=2;
	} else if (n<1000) {
		length=3;
	} else if (n<10000) {
		length=4;
	}
		m=(m*pow(10,length))+n;	
	for (i=1;i<=n;i++) {
		
			if (i<10) {
		length2=1;
	} 
	else if (i<100) {
		length2=2;
	} else if (i<1000) {
		length2=3;
	} else if (i<10000) {
		length2=4;
	}
	phantu=(i*pow(10,length2))+i;
	s=s+phantu; phantu=1;
	}
		cout<<s;
	return 0;
}
	


