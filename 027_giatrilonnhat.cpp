#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],vitri,max1;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        if (i==1){
            max1=a[i];
            vitri=i;
        }
        else{
            if (max1<a[i]){
                max1=a[i];
                vitri=i;
            }
        }
    }
    cout<<max1<<" "<<vitri;
	return 0;
}
 