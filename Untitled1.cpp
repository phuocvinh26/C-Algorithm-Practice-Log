#include<bits.sdtc++.h>
using namespace std;
void sw(a[int 1001][3],int i, int j){
	int tg;
	tg=a[i][1]; a[i][1]=a[j][1]; a[j][1]=tg;
	tg=a[i][2]; a[i][2]=a[j][2]; a[j][2]=tg;
}
int main(){
	int n,a[1001][3],du=0,tong=0,timebe;
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i][1]>>a[i][2]
	for (int i=1;i<n;i++){
		if (a[i][2]<a[i+1][2])
			sw(a,i,i+1);
	}
	for (int i=1;i<=n;i++){
		du+=a[i][1];
		timebe=a[i][2]+du;
		tong=max(timebe,du);
	}
	cout<<tong;
	return 0;
}
