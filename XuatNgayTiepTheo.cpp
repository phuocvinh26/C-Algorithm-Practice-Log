#include<iostream>
#include<math.h>
using namespace std;
int ktra(int y) {
	int ktra=0;
	if ((y%4==0 && y%100!=0) || y%400==0) {
		ktra=1;
	}
	return ktra;
}
int main() {
	int d,m,y,input; input=0;
	cin>>d>>m>>y;
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ) {
		if (d==31) {
			input=1;
		}
		else {
			input=d+1;
		}	
	} 
	 else if (m==12) {
	 if (d==31) {
	 	input=1;
	 } else {
	 	input=d+1;
	 }	
	} 
	 else if (m==2){
		if ((d==28 &&ktra(y)==0 ) || (d==29 && ktra(y)==1)){
			input=1;
		} else if ((d<29 && ktra(y)==1) || (d<28 && ktra(y)==0)) {
			
				input=d+1;
			 }
		} 
		else {
		if (d==30) {
			input=1;
		} else {
			input=d+1;
		}
	}
	cout<<input;
	return 0;
}
