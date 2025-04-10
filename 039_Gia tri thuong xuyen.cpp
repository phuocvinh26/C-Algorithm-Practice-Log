#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,dem=0,output=0;
	long long a[11000];
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	sort(a,a+n);
	for (i=0;i<n;i++)
	{
		dem=0;
		for (j=i;j<n;j++)
		{
			if (a[i]==a[j])
			{
				dem++;	
			}
		} 
		if (dem>2)
		{
			output++;
		}
		i=i+dem-1;
		dem=0;
	}
	cout<<output;
	return 0;
}
