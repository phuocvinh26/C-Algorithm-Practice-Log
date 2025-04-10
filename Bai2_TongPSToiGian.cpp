#include<bits/stdc++.h>
using namespace std;
void cps(int tu,int mau,int &tongtu,int &tongmau){
    int bd,kt=tongmau*mau;
    
    if (mau>=tongmau)
        bd=mau;
    else
        bd=tongmau;
    for (int i= bd; i<=kt;i++){
        if (i%mau==0 && i%tongmau==0){
            tu=tu*(i/mau);
            mau=mau*(i/mau);
            tongtu=tongtu*(i/tongmau);
            tongmau=tongmau*(i/tongmau);
            break;
        }
    }
    tongtu+=tu;
}
int uocchung(int tu,int mau){
    int bd,uoc=0;
    if (tu<=mau)
        bd=tu;
    else
        bd=mau;
    for (int i=bd;i>=1;i--){
        if (tu%i==0 && mau%i==0) {
            uoc=i;
            return i;
        }
    }
    return 1;
}
int main(){
    int n,tu[1000],mau[1000];
    int tongtu=0,tongmau=0;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>tu[i]>>mau[i];
    }
    tongtu=tu[0]; tongmau=mau[0];
    for (int i=1;i<n;i++){
        cps(tu[i],mau[i],tongtu,tongmau);
    }
    int uoc;
    uoc=uocchung(tongtu,tongmau);
    tongtu=tongtu/uoc;
    tongmau=tongmau/uoc;
    cout<<tongtu<<" "<<tongmau;
    return 0;
}
