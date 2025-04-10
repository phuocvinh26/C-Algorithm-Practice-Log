#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,y,tong=0,j;
	int a[100][100];
	cin>>n>>m>>x>>y;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		j=y+i-x;
		if (j>=1 && j<=m)
			tong+=a[i][j];
	}
	for (int i=1;i<=n;i++){
		j=y-i+x;
		if (j>=0 && j<=m)
			tong+=a[i][j];
	}
	tong-=a[x][y];
	cout<<tong;
	return 0;
}
