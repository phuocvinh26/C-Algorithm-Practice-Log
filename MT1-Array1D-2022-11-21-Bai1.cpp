#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000],max1,hieu;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (i==0)
            max1=a[i];
        if (max1<=a[i]){
            max1=a[i];
            hieu=i;
        }

    }
    for (int i=0;i<n;i++){
        if (a[i]==max1){
            hieu=hieu-i;
            cout<<hieu;
            return 0;
        }

    }
    return 0;
}
