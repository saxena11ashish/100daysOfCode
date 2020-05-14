#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;cin>>t;
	while(t--){
	    int a[3];
	    cin>>a[0]>>a[1]>>a[2];
	    sort(a,a+3);
	    cout<<a[1]<<endl;
	}
	return 0;
}
