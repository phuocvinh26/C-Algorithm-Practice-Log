#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,tong=0;
	long long a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];	
	long long max=a[1];
	for (i=1;i<=n;i++)
	{
		tong=0;
		for (j=i;j<=n;j++)
		{
			tong=tong+a[j];	
			if (max<tong)
			max=tong;
		}
	}
	cout<<max;
	return 0;
}
