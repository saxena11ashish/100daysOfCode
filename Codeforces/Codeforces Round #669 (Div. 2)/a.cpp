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
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int sum = accumulate(a.begin(), a.end(),0);
	if(sum<=n/2){
		cout<<n/2<<endl;
		for(int i=0;i<n/2;i++)cout<<0<<" ";
	}
	else{
		for(int i=0;i<a.size();){
			if(a[i]==0)
				a.erase(a.begin()+i);
			else i++;
		}
		if(a.size()%2!=0)
			a.pop_back();
		cout<<a.size()<<endl;
		for(int i:a)cout<<i<<" ";
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