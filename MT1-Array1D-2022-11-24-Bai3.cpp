#include<iostream>
#include<climits>
using namespace std;
int main() 
{
	long long i,j,n,tich, check=0;
	long long a[1000];
	cin>>n;
	for (i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	long long max= LLONG_MIN;
	for (i=0;i<=n-2;i++) 
	{
		for (j=i+1;j<=n-1;j++) 
		{
			if (a[i]!=a[j])
			{
				check=1;
				tich=a[i]*a[j];
				if (max<tich) 
				{
					max=tich;
				}
			}
		}
	}
	if (check==1)
	{
		cout<<max;
	}
	else
	{
		cout<<0;
	}
		return 0;
}
