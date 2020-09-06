#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func() {
	int n, x, y;
	cin>>n>>x>>y;
	cout<<x<<" "<<y<<" ";
	if(n==2)
		return;
	int N = n-1;
	int diff = y-x;

	while(diff%N !=0)
		N--;

	int d = diff/N;
	// deb(d);
	n-=2;
	for(int i=x+d;i!=y;i+=d,n--){
		cout<<i<<" ";
	}
	for(int i=x-d;n>0 && i>0;i-=d,n--){
		cout<<i<<" ";
	}
	for(int i=y+d;n--;i+=d){
		cout<<i<<" ";
	}	
	cout<<endl;
	return;
}

//----------------------------------------------------------------------//
int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt", "r", stdin);
	freopen("/home/ashish/CPP/out.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		func();
	}
	return 0;
}