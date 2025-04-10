#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int ktra(int a) {
	int ktra;
	if (a>=10 && a<=20) {
		ktra=1;
	} else ktra=0;
	return ktra;
}
int main() {
	int a,b;
	cin>>a>>b;
	if ((ktra(a)==1 && ktra(b)==0) || (ktra(b)==1 && ktra(a)==0)) {
		cout<<1;
	} else cout<<0;
	return 0;
}
	


