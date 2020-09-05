#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	cout<<(v[0]==0 ? v.size()-1 : v.size())<<endl;	
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