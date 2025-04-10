#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,tren=1,duoi,trai=1,phai;
	int i,j,so;
	int a[110][110];
	cin>>m>>n; duoi=m; phai=n;
	while (so<n*m)
	{
		for (i=trai;i<=phai;i++)
			a[tren][i]=so++;
		tren++;
		for (i=tren;i<=duoi;i++)
			a[i][phai]=so++;
		phai--;
		for (i=phai;i>=trai;i--)
			a[duoi][i]=so++;
		duoi--;
		for (i=duoi;i>=tren;i--)
			a[trai][i]=so++;
		trai++;
	}
	for (i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<a[3][3];
	return 0;
}
