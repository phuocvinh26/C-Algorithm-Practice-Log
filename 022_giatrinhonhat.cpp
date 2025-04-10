#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000];
    int min;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (i==0)
            min=a[i];
        if (min>a[i])
            min=a[i];
    }
    cout<<min;
    return 0;
}