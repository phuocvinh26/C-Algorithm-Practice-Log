#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k,check=0;
	int a[1100], b[1100];
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	sort(a,a+n);
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				for (k=j;k<n-1;k++)
				{
					a[k]=a[k+1]; 
				}
				n--; j--;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
