#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//

void func(){
	int n,temp;cin>>n;
	
	int a[11]={0};
	while(n--){
		cin>>temp;
		a[temp]++;
	}
	map<int,int>m;
	for(int i=1;i<11;i++){
		if(a[i]!=0)
			m[a[i]]++;
	}
	map<int,int> :: iterator it = m.begin();
	int modal=INT_MIN,ans=0;
	while(it!=m.end()){
		if(it->second > modal){
			modal = it->second;
			ans = it->first;
		}
		it++;
	}
	cout<<ans<<endl;
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
