#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
	int main() {
		long long n, i;
		int dem=0; i=0;
		cin>>n;
		for (i=2;(i<=sqrt(n));i++) {
			if (n%i==0) {
				dem++;
			}
		}
		if (n=1) {
			cout<<"NO";
		}
		else if (dem==0)    {
			cout<<"YES";
			}
		else cout<<"NO";
			return 0;
	}
