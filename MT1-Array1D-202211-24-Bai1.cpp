#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a[210];
	int i,min,n,kc;
	cin>>n;
	for (i=1;i<=n;i++) {
		cin>>a[i];
	}
	min=abs(a[2]-a[1]);
	for (i=1;i<n;i++) {
		kc=abs(a[i+1]-a[i]); 
		if (min>kc) {
			min=kc;
		}
	}
	cout<<min;
	return 0;
}
