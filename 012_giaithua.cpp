#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n,output=1;
   cin>>n;
   for (int i=1;i<=n;i++){
    output*=i;
   }
   cout<<output;
    return 0;
}