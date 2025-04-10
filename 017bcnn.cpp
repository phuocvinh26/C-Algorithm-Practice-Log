#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main () {
	long long a, b, bcnn, i;
	cin>>a>>b;
	for (i=max(a,b);i<=a*b;i=i+max(a,b)) {
		if((i%a==0) && (i%b==0)) {
			bcnn=i; break;
		}
	}	
	cout<<i;
	return 0;
}
