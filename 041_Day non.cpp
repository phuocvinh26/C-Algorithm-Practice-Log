#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,n,max,vt,checktr=1,checks=1;
	long long a[11000];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	max=a[1]; a[0]=a[1]-1; a[n+1]=a[n]-1;
	for (i=2;i<=n;i++)
	{
		if (max<=a[i])
		{
			max=a[i]; vt=i;
		}
	} 
	for (i=1;i<n;i++)
	{
		if (a[i]>a[i+1])
		checktr=0;
	}
	for (i=vt;i<n;i++)
	{
		if (a[i]<a[i+1])
		checks=0;
	}
	if (vt==1 || vt==n)
	checktr=0;
	if (checktr==1 && checks==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
