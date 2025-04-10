#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,chenh;
	int a[1100];
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	int max=abs(a[1]-a[2]);
	for (i=2;i<n;i++)
	{
		chenh=abs(a[i]-a[i+1]); 
		if (chenh>max)
			max=chenh; 
	}
	cout<<max;
	return 0;
}
