#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,tam ;
	vector<int> a;
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>tam;
		a.push_back(tam);
	}
	for (int i=1;i<=k;i++){
		tam=a[0];
		a.erase(a.begin());
		a.push_back(tam);
	}
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
