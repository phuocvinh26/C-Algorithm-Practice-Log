#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,dem=0,check=-1;
	string a[101],b[101];
	cin>>m>>n;
	for (int i=1;i<=m;i++)
		cin>>a[i];
	for (int i=1;i<=n;i++){
		cin>>b[i]; 
		for (int j=check;j<=m;j++){
			if (b[i]==a[j]){
				check=j;
				dem++;
				break;
			}
		}
	}
	if (dem==n)
		cout<<"YES";
	else
		cout<<"NO";	
	
	return 0;
}
