#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1000],max1=INT_MIN,max2=INT_MIN;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
        if (max1<a[i]){
            max2=max1;
            max1=a[i];
        }
        else if (a[i]<max1 && a[i]>max2){
            max2=a[i];
        }
    }
    if (max2==INT_MIN)
        cout<<-1;
    else
        cout<<max2;
    return 0;
}
