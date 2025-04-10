#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int g1,g2,g3,so;
	cin>>g1>>g2;
	g3=180-g1-g2;
	if (g1==90 || g2==90 || g3==90) {
		so=1;
		if (g1==g2 || g2==g3 || g3==g1) {
			so=0;
		}
	}
	else if (g1<90 && g2<90 && g3<90) {
		so=3;
	}
	else { 
	so=2;}
	cout<<so;
	return 0;
}
	

