#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
	int d,m,y,quy,d0,d2,m0,m2;
	char check; char hl='H'; char khl='K'; int test=0;
	cin>>d>>m>>y;
	if (((m==4)|| (m==6)|| (m==9) || (m==11) ) && (d<31)) {
		check=hl;
		if ((d==1)) {
			d0=31; d2=d+1; m0=m-1; m2=m;
		} 
		if (d==30) {
			d0=d-1; d2=1; m0=m; m2=m+1; }
			else {
				d0=d-1; d2=d+1; m0=m; m2=m;
			}
		
	} 
	else if (m==2) {
		if ((y%4==0) && (y%400==0) && (y%100==0)) {
			test=1;
			if (d<30) { check=hl;
			} else { check=khl;
			} 
		} else { if (d<29) {
			check=hl;
		} else {
			check=khl;
		}
		}
	}
	else if (((m==1)|| (m==3)|| (m==5)|| (m==7)|| (m==8)|| (m==10)|| (m==12)) && (d<=31)) {
		check=hl; 
		if ((d==1) && (m==8)) {
			d0=31; d2=d+1; m0=m-1; m2=m;	
		}
		if (d==31) {
		d0=d-1; d2=1; m0=m; m2=m+1;
		} 
		else {
			d0=d-1; d2=d+1;
		}
		
		} else  { check=khl;	} 
		if ((d==1) && (m==3)) {
		if (test==1) {
			d0=29; d2=d+1; m0=m-1; m2=m;
		} else {
			d0=28; d2=d+1; m0=m-1; m2=m;
		}
	}
	
	 if ((m==1)|| (m==2)|| (m==3)) {
	 	quy=1;
	 } if ((m==4) || (m==5) || (m==6)) {
	 	quy=2;
	 }  if ((m==7) || (m==8) || (m==9)) {
	 	quy=3;
	 } if ((m==10) || (m==11) || (m==12)) {
	 	quy=4;
	 }
	cout<<check<<endl ;
	cout<<quy<<endl;
	cout<<d0<<" "<<m0<<" "<<y;
	cout<<d2<<" "<<m2<<" "<<y;
	return 0;
}
