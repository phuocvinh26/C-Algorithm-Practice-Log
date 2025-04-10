#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,m,j,x,y,k,l,step,step2,dem=0,check=0;
	long long a[110][110],b[110][110];
	cin>>n>>m>>x>>y;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for (j=0;j<x;j++)
	{
		for (i=0;i<y;i++)
		{
			cin>>b[j][i];
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			if(a[i][j]==b[0][0])
			{
				for (k=0;k<x;k++)
				{
					for(l=0;l<y;l++)
					{
						step2=l+j; step=k+i; 
						if (b[k][l]==a[step][step2])
						{
							dem++; 
						}
					}
				}
				if (dem==x*y)
				{
					check=1;
				}
				dem=0;
			}
		}
	}
	if (check==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	return 0;
}
