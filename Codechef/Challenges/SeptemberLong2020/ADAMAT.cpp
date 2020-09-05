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
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	vector<int>v;
	for(int i=2;i<=n;i++)
		v.push_back((a[1][i]==i) ? 1:0);
	
	v.erase(unique(v.begin(),v.end()),v.end());
	cout<<(v.back()==1 ? v.size()-1 : v.size())<<endl;
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