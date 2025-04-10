#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    vector<int> am;
    vector<int> duong;
    cin>>n;
    for (int i=0;i<n;i++){
        int cur;
        cin>>cur;
        if (cur<0)
            am.push_back(cur);
        else
            duong.push_back(cur);
    }
    int dich;
    dich=max(am.size(),duong.size());
    for (int i=0;i<dich;i++){
        if (i< am.size())
            cout<<am[i]<<" ";
        if (i< duong.size())
            cout<<duong[i]<<" ";
    }    

	return 0;
}
 