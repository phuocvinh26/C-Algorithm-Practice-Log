#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,dem=0;
	int a[1100], b[1100];
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	for (i=0;i<n;i++)
	{
		cin>>b[i]; 
	}
	sort(a,a+n);
	sort(b,b+n);
	for (i=0;i<n;i++)
	{
		if (a[i]==b[i])
		{
			dem++;
		}
	}
	if (dem==n)
	{
		cout<<"YES";
	}
	else 
	{
		cout<<"NO";
	}
	return 0;
}
