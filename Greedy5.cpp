#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,kc,b,a[10001],start=-1,dem=0;
	cin>>n>>kc>>b;
	start-=b;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	for (int i=1;i<=n;i++){
		if (a[i]>(start+b)){
			dem++;
			start=a[i]+b;
		}
		if ((a[i])<=(start+b)){
			for (int j=i;j<n;j++){
				a[j]=a[j+1];
			}
			i--;
			n--;	
		}
	}
	cout<<dem;
	return 0;
}
