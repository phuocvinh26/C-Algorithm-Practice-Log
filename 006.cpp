#include<iostream>
#include<math.h>
using namespace std;
	int main() {
		int a, b, c, ab, bc, ac;
			cin>>a>>b>>c;
			ab=a+b; bc=b+c; ac=a+c;
			if ((ab>c) && (bc>a) && (ac>b)) {
				cout<<"YES";
			} else cout<<"NO";
			
		
		return 0;
	}
