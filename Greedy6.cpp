#include<bits/stdc++.h>
using namespace std;
void sw(int a[101][4],int i,int j){
	int tg;
	tg=a[i][1]; a[i][1]=a[j][1]; a[j][1]=tg;
	tg=a[i][2]; a[i][2]=a[j][2]; a[j][2]=tg;
	tg=a[i][3]; a[i][3]=a[j][3]; a[j][3]=tg;
}
int main(){
	int n,a[101][4],tong=0,du=0,timebe,timeaf;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=3;j++)
			cin>>a[i][j];
	}
	for (int i=1;i<n;i++){
		for (int j=i+1;j<=n;j++){
			if ((a[i][2]+a[i][3])<(a[j][2]+a[j][3])){
				sw(a,i,j);	
			}
		}
	}
	for (int j=1;j<=n;j++){
		du+=a[j][1];	
		timebe=(a[j][2]+a[j][3])+du;
		tong=max(timebe,tong);
	}
	
	cout<<tong;
	return 0;
}
