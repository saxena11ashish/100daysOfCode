#include <bits/stdc++.h>

using namespace std;

#define fastIO       ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define lli			 long long int
//----------------------------------------------------------------------//

void func(){
	lli n,m,a;
	cin>>n>>m>>a;
	lli l = n/a, b = m/a;
	l += (n%a==0 ? 0 : 1);
	b += (m%a==0 ? 0 : 1);
	cout<<l*b;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	//cin>>t;
	while(t--){
		func();
	}
}