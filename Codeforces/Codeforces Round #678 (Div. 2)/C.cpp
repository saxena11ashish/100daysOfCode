#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;
#define mod 	1000000007
//----------------------------------------------------------------------//
lli fact(lli n){
	int ans = 1;
	for(int i=2;i<=n;i++)
		ans = (ans*i)%mod;
	return ans;
}
void func(){
	lli n,x,pos;
	cin>>n>>x>>pos;
	cout<<fact(n-1)<<endl;	
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t=1;
	while(t--){
		func();
	}
}