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
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int count=0;
	for(int i=1;i<n;i++){
		if(a[i]==a[0])
			count++;
	}
	if(count==n-1){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	bitset<10000> b;
	int temp;
	for(int i=1;i<n;i++){
		if(a[i]==a[0])
			b[i]=1;
		else{
			cout<<1<<" "<<i+1<<endl;
			temp=i;
		}
	}
	for(int i=0;i<5000;i++){
		if(b[i]==1)
			cout<<temp+1<<" "<<i+1<<endl;
	}
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