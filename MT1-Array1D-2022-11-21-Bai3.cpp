#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000],x,min=INT_MAX,cs,hieu;
    cin>>n>>x;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (x!=a[i]){
            hieu=abs(x-a[i]);
            if (min>hieu){
                min=hieu;
                cs=i;
            }
        }
    }
    cout<<cs;
    return 0;
}
