#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a[210];
	int i,j,n; int check=0; long long tong2, tong1=0; 
	cin>>n;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	for (i=0;i<n-1;i++) {
		tong1=tong1+a[i]; tong2=0;
		for (j=i+1;j<n;j++) {
			tong2=tong2+a[j];
		} 
		if (tong1==tong2) {
		 cout<<i; check=1;	break;
		}
	}
	if (check==0) {
		cout<<-1;
	}
	return 0;
}
