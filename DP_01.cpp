#include<bits/stdc++.h>
using namespace std;
int tien(int l[10001],int h[10001],int n){
	int tien=0;
	int dp[10000];
	for (int i=2;i<=n;i++){
		if ((l[i]+l[i-1])>(h[i-2]+h[i]) ){
			dp[i]=(l[i]+l[i-1]);
		}
		else
			dp[i]=(h[i-2]+h[i]);
		tien+=max(tien,dp[i]);
	}
	return tien;
}
int main(){
	int n;
	int l[10001],h[10001];
	cin>>n;
	l[0]=0;
	h[0]=0;
	for (int i=1;i<=n;i++)
		cin>>l[i];
	for (int i=1;i<=n;i++)
		cin>>h[i];
	cout<<tien(l,h,n);
	return 0;
}
