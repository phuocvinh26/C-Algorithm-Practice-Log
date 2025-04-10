#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,a[100][100],dem=1;
	cin>>n>>m;
	int h1=1; int h2=n;
	int c1=1; int c2=m;
	while (dem<=n*m){
		for (int i=c1;i<=c2;i++){
			 a[h1][i]=dem;
			 dem++;
		}
		if (h1+1<=n)
			h1++;
		else break;
		for (int i=h1;i<=h2;i++){
			a[i][c2]=dem;
			dem++;
		}
		if (c2-1>=1)
			c2--;
		else break;
		for (int i=c2;i>=c1;i--){
			a[h2][i]=dem;
			dem++;
		}
		if (h2-1>=1)
			h2--;
		else break;
		for (int i=h2;i>=h1;i--){
			a[i][c1]=dem;
			dem++;
		}
		if (c1+1<=m)
			c1++;
		else break;
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
