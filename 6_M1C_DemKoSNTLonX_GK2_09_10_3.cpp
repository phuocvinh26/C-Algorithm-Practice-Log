#include<bits/stdc++.h>
using namespace std;
bool nt(int n)
{
	bool nt=true;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0)
		return false;
	}
	return nt;
}
int main()
{
	int n,x,i,j,dem=0;
	int a[1100];
	cin>>n>>x;
	for (i=1;i<=n;i++)
		cin>>a[i];	
	for (i=1;i<=n;i++)
	{
		if ((a[i]>x) && (nt(a[i])==0))
		dem++;
	}
	cout<<dem;
	return 0;
}
