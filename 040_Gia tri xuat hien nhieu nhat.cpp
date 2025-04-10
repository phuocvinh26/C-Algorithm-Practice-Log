#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,dem=0;
	int a[1100];
	int maxa=INT_MIN;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0;
	for (i=0;i<n;i++)
	{
		dem=0;
		for (j=i;j<n;j++)
		{
			if (a[i]==a[j])
			{
				dem++;
			}
		}
		if (max<dem)
		{
			max=dem; maxa=a[i];
		}
		else if (max==dem)
		{
			if (maxa<a[i])
			{
				maxa=a[i];
			}
		}
		
	}
	cout<<maxa;
	return 0;
}
