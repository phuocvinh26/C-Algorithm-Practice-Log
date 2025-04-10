#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],dem=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]<=a[j])
                break;
            if (j==(n-1) && a[i]>a[j])
                dem++;
        }
    }
    cout<<dem;      
	return 0;
}
 