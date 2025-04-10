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
    for (int i=0;i<am.size();i++){
        cout<<am[i]<<" ";
    }
    for (int i=0;i<duong.size();i++){
        cout<<duong[i]<<" ";
    }

	return 0;
}
 