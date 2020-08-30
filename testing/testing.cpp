	#include <bits/stdc++.h>
	
	using namespace std;
	
	#define lli             long long int
	#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
	#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
	#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
	
	//----------------------------------------------------------------------//
	
	void func(){
		int a[3][3]={{4,2,1},{7,9,3},{6,8,5}};
		for(int *i:a)
			sort(i,i+3);
		for(int i=0;i<3;i++){
			for(int ii=0;ii<3;ii++)
				cout<<a[i][ii];
			cout<<endl;
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