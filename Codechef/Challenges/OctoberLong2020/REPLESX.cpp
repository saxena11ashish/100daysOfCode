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
	int x,p,k;
	cin>>x>>p>>k;
	int xPresent = 0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==x)
			xPresent++;
	}
	sort(a,a+n);
	int smallerElements = 0;
	for(int i:a){
		if(i<x)
			smallerElements++;
		else break;
	}
	int ans=-1;
	if(a[p-1]==x)
		ans=0;
	else if(p == k)
		ans=1;
	else if( p<k && smallerElements < p)
		ans = p - xPresent - smallerElements;
	else if( p>k && smallerElements >= p)
		ans =1;
	cout<<ans<<endl;
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