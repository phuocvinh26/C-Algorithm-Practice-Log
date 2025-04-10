#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,j,n,x,check=0;
	long long a[1100];
	cin>>n>>x;
	for (i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (i=1;i<=n;i++)
	{
		if (x==a[i])
		{
			cout<<"YES";
			check=1;
			break; 
		}
	}
	if (check==0)
	{
		cout<<"NO";
	}
	return 0;
}
