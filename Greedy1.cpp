#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
	int n,l,c,dem=0,d=0;
	cin>>n>>l>>c;
	if (l==c){
		cout<<0; return 0;	
	}
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if ((a[i]-d)>c){
			dem++;
			d=a[i-1];
		}
	}
	cout<<dem;
	return 0;
}
