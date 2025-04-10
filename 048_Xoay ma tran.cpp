#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n;
	int a[110][110];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for (i=1;i<=n;i++)
	{
		for (j=n;j>=1;j--)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
