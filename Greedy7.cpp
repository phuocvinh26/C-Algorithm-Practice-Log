#include<bits/stdc++.h>
using namespace std;
void sw(int a[1001][3],int i, int j){
	int tg;
	tg=a[i][1]; a[i][1]=a[j][1]; a[j][1]=tg;
	tg=a[i][2]; a[i][2]=a[j][2]; a[j][2]=tg;
}
int main(){
	int n,a[1001][3],du=0,tong=0,timebe;
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i][1]>>a[i][2];
	for (int i=1;i<n;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i][2]<a[j][2])
				sw(a,i,j);
		}
	}
	for (int i=1;i<=n;i++){
		du+=a[i][1]; 
		timebe=a[i][2]+du;
		tong=max(timebe,tong);
	}
	cout<<tong;
	return 0;
}
