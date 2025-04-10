#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,dem=0;
	int b[1100],a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];	
	int j=1;
	for (i=n;i>=1;i--)
	{
		b[j]=a[i]; j++;
	}
	for (i=1;i<=n;i++)
	{
		if (a[i]==b[i])
		dem++;
	}
	if(dem==n)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
