#include<iostream>
#include<math.h>
using namespace std;
	int main() {
		int a, b, c, min, max;
			cin>>a>>b>>c;
			min=a;
			if (min>b) {
				min=b;
			} 
			if (min>c) {
				min=c;
			}
			cout<<min<<" ";
			max=a;
			if (max<b) {
				max=b;
			}
			if (max<c) {
				max=c;
			}
			cout<<max;
		
		
		return 0;
	}
