#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,n,a[50][50],tong=0,sl=0;
   cin>>m>>n;
   for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
   }
   for (int i=0;i<n;i++){
        if (a[0][i]%5==0){
           tong+=a[0][i];
           sl++;
        }
        if (a[m-1][i]%5==0){
            tong+=a[m-1][i];
            sl++;
        }
   }
   for (int i=1;i<m-1;i++){
        if (a[i][0]%5==0){
            tong+=a[i][0];
            sl++;
        }
        if (a[i][n-1]%5==0){
            tong+=a[i][n-1];
            sl++;
        } 
   }
   if (sl==0)
    cout<<-1;
    else
        cout<<int(tong)/sl;
    return 0;
}