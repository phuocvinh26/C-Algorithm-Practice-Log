#include<iostream>
#include<climits>
using namespace std;
int main() 
{
	long long i,j,n,dem,output=0; 
	long long a[1000];
	cin>>n;
	for (i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<=n-2;i++)
	{
		dem=1;
		for (j=i+1;i<n-1;j++)
		{
			
			if (a[i]==a[j])
			{
				dem++;
					
			} 
			else
			{
				break;
			} 
			
			
		}
		if (dem>1)
			{
				output++;
				i=i+dem-1;
			} 
	}
	cout<<output;
		return 0;
}
