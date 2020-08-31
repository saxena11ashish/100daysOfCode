#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(v.begin(),v.end());
	for(int i=n-1;i>0;i--){
		if(v[i] == v[i-1]){
			v.pop_back();v.pop_back();
		}
	}
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	cin>>t;
	while(t--){
		func();
	}
}