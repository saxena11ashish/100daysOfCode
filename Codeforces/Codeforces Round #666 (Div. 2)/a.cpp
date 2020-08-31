#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	string s;
	int n;
	cin>>n;
	cin.ignore();
	int a[26]={0};
	int nn=n;
	while(nn--){
		cin>>s;
		for(char &c: s){
			a[c-97]++;
		}
	}
	for(int i=0;i<26;i++){
		if(a[i]%n!=0){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
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