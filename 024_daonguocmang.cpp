#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000];
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=n;i>=1;i--){
        if (i%2!=0)
            cout<<a[i]<<" ";
    }
	return 0;
}
 