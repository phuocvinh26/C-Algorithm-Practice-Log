#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],tong=0,tg;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[j]>a[i]){
				tg=a[i]; a[i]=a[j]; a[j]=tg;
			}
		}
	}
	for (int i=0;i<n;i++)
		tong+=pow(a[i],(i+1));
	cout<<tong*100;
	return 0;
}
