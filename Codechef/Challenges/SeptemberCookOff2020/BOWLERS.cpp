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
		int l,k;
		cin>>k>>l;
		if(k*l < n || (n>1 && k==1) ){
			cout<<-1<<endl;
			return;
		}
		for(int i=0;i<n/k;i++){
			for(int j=1;j<=k;j++){
				cout<<j<<" ";
			}
		}
		for(int i=0,j=1;i<n%k;i++,j++){
			cout<<j<<" ";
		}
		cout<<endl;
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