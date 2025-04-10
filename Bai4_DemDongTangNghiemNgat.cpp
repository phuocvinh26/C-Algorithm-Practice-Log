#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[70][70],dem=0;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m-1;j++){
            if (a[i][j]>=a[i][j+1])
                break;
            if (j==m-2)
                dem++;
        }
    }
    if (dem==0)
        cout<<-1;
    else
        cout<<dem;
    return 0;
}