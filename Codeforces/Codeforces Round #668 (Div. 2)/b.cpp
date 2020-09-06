#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	lli a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	lli ans=0;
	for(int i=n-1;i>=0;i--){
		if(a[i] < 0)
			ans+=a[i];
		else if(a[i]>0){
			ans += a[i];
			if(ans>0)ans=0;
		}
	}
	cout<<abs(ans)<<endl;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t=1;
	cin>>t;
	while(t--){
		func();
	}
}