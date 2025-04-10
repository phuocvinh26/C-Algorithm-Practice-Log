#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
	int main() {
		int n, i;
		int dem=0; i=0;
		cin>>n;
		for (i=2;i<n;i++) {
			if (int(n)%i==0) {
				dem++;
			}
		}
		if (((dem==0) || (n==2) ) && n>1) {
			cout<<"YES";
			}
		else cout<<"NO";
			return 0;
	}
