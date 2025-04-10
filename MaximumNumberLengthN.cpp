#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,s,kq;
	int check=0,a[100];
	cin>>n>>s;
	if (s>9*n || n<=0 ||s==0)
	{
		cout<<-1;
	}
	else
	{
		for (int i=1;i<=n;i++)
		{
			a[i]=9;
		}
		for (int i=1;i<=n;i++)
		{
			if (s>9)
				a[i]=9;
			else
				a[i]=s;
			s-=a[i];
		}
			for (int i=1;i<=n;i++)
				cout<<a[i];
	}
	return 0;
}
