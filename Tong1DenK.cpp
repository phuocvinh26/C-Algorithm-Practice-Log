#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	long long n,k,s,i; s=0; k=0; 
	cin>>n;
	for (i=1;i<=n;i++) {
		s=s+i; 
		if (s<n) {
			k++;
		} else break;
	}
	cout<<k;
	return 0;
}
