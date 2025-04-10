#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,w,a[1000],dem=1,tt=0;
	cin>>n>>w;
	for (int i=1;i<=n;i++){
		cin>>a[i]; 
		tt+=a[i];
		if (tt>w){
			dem++;
			tt=a[i];
		}
	}
	cout<<dem;
	return 0;
}
