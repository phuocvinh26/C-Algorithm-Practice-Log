#include<iostream>
#include<climits>
using namespace std;
int main() 
{
	long long i,n,dem2=0,dem5=0,so1,so2, check=0;
	long long a[1000];
	cin>>n;
	for (i=0;i<=n-1;i++)
	{
		cin>>a[i];
		so1=a[i]; so2=a[i];
		if (so1!=0)
		{
			check=1;
			while (so1%2==0) 
			
			{
				dem2++;
				so1=so1/2;
			}
			while (so2%5==0)
			{
				dem5++;
				so2=so2/5;
			}
		}
	}
	if (check==1)
	{
		cout<<min(dem2,dem5);
	}
	else
	{
		cout<<0;
	}
		return 0;
}
