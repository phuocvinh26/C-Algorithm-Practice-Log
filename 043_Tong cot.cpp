#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m,j,dem=0;
	long long tong=0;
	long long a[110][110];
	cin>>n>>m;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for (j=0;j<m;j++)
	{
		for (i=0;i<n;i++)
		{
			tong=tong+a[i][j];
		}
		cout<<tong<<" ";
		tong=0;
	}
	return 0;
}
