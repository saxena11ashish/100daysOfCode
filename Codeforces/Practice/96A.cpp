#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//

void func(){
	string s;
	cin>>s;
	int count=1;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]){
			count++;
			if(count==7){
				cout<<"YES";return;
			}
		}
		else 
			count=1;
	}
	cout<<"NO\n";
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	// cin>>t;
	while(t--){
		func();
	}
}