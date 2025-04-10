#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a,b,c,d;
	cin>>a>>c;
	b=a%10; a=int(a)/10; d=c%10; c=int(c)/10;
	if ((a==c && b!=d) || (b==c && a!=d) || (d==a && c!=b) || (d==b && c!=a)) {
		cout<<1;
	} else cout<<0;
	
	return 0;
}
	


