#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,loai;
	long long a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
		if (i==1)
			loai=a[1];
		else if (loai<a[i])
			loai=a[i];	
	}
	long long max=LONG_MIN;
	for (i=1;i<=n;i++)
	{
		if (a[i]!=loai)
		{
			if 	(max<a[i])
			max=a[i];
		}
		else continue;
	}
	cout<<max;
	return 0;
}
