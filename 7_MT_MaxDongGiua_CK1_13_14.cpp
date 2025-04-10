#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,k;
	long long i,j;
	long long a[110][110];
	cin>>m>>n;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	k=long(m/2); long long max=a[k][0];
	for(j=1;j<n;j++)
	{
		if (max<a[k][j])
		max=a[k][j];
	}
	cout<<max;
	return 0;
}
