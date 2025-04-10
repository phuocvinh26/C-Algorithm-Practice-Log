#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,bd;
   cin>>a>>b;
   if (a<=b)
        bd=a;
    else
        bd=b;
    for (int i=bd;i>=1;i--){
        if (a%i==0 && b%i==0){
            cout<<i;
            return 0;
        }
    }
    return 0;
}