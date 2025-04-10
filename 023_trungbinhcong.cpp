#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000];
    float output;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
        output+=a[i];
    }
    output=output/n;
    cout<<fixed<<setprecision(3)<<output;
    return 0;
}