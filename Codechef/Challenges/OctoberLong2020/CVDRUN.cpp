#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n,k,x,y;
	cin>>n>>k>>x>>y;
	if(k==0 && x!=y){
		cout<<"No\n";
		return;
	}
	k = k%n;
	int temp = n/k, temp_x = x;
	for(int i=0;i<temp;i++){
		temp_x = (temp_x+k) % n;
		if(temp_x == y){
			cout<<"Yes\n";
			return;	
		}
	}
	if(temp_x == x)
		cout<<"No\n";
	else cout<<"Yes\n";
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