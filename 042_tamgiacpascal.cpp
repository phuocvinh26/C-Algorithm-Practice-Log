#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,a[50][100],m=1,j=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (j==1 || j==m){
				a[i][j]=1; cout<<a[i][j]<<" ";
			}
			else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
		m++;
	}
	return 0;
}
