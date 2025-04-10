#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int b,t;
} luong;
int main(){
	int n,r,b=0,t=0;
	luong a[1000];
	cin>>n>>r;
	for (int i=1;i<=n;i++)
		cin>>a[i].b>>a[i].t;
	for (int i=1;i<=n;i++){
		t+=a[i].t;
		b+=a[i].b;
	}
	if (r*t>=b)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
