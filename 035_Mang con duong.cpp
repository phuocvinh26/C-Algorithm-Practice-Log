#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,dem=0;
	int a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	int max=0;
	for (i=1;i<=n;i++)
	{
		if (a[i]>0)
		{
			for (j=i;j<=n;j++)
			{
				if (a[j]>0)
				{	
				dem++;
				}
				else break;
			}
			if (max<dem)
			{
			max=dem;
			}
			dem=0;
		}
	}
	cout<<max;
	return 0;
}
