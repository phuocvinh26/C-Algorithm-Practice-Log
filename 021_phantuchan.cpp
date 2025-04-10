#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a[1000],dem=0;
   cin>>n;
   for (int i=0;i<n;i++){
    cin>>a[i];
    if (a[i]%2==0)
        dem++;
   }
   cout<<dem;
    return 0;
}