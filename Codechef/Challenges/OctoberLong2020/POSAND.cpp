#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<" : ";
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	lli x = 1;
	while(x*2 <= n){
		x *= 2;
	}
	if(n==1){
		cout<<1<<endl;
		return;
	}
	else if(n==2 || x==n){
		cout<<-1<<endl;
		return;
	} 
	else if(n==3){
		cout<<1<<" "<<3<<" "<<2<<endl;
		return;
	}
	if(n%2==0){
		for(int i=x;i<=n-2;i++){
			cout<<i<<" ";
		}
		cout<<n<<" "<<n-1<<" ";
	}
	else{
		for(int i=x;i<=n;i++)
			cout<<i<<" ";
	}
	n=x-1;
	x/=2;
	while(n>3){
		// cout<<"<==>";
		cout<<x+1<<" "<<x<<" ";
		for(int i=x+2;i<=n;i++)
			cout<<i<<" ";
		n=x-1;
		x/=2;
	}
	cout<<1<<" "<<3<<" "<<2<<endl;
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
	// for(int i=1;i<=150;i++){
	// 	cout<<i<<endl;
	// }
}