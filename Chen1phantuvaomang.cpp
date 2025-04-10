#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
	long long i,j,n,dem,x,output=0; 
	long long a[1000];
	cin>>n>>x;
	for (i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	a[n]=x;
	sort(a,a+n+1);
	cout<<(a[(n+1)/2]);
		return 0;
}
