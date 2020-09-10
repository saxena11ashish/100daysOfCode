#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
bitset<1000001> bset;
void func1(){
	bset.reset();
	int n;cin>>n;
	int cn=n;
	lli sum = (n*(n+1))/2;
	// (sum);
	if(n==1)
		cout<<1<<endl<<1;
	else{
		cout<<(sum%2==0 ? 0:1)<<endl;	//prints 0 if sum(n) is even, else 1

		sum/=2;
		
		// for(auto i:bset)cout<<i<<"->";
		while(n < sum){
			bset[n]=1;
			sum-=n;
			n--;
		}
		bset[sum]=1;
		for(int i=1;i<=cn;i++)		//0,1 represents people to which pile is assigned
		 	cout<<bset[i];
	}
	cout<<endl;
	return;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif
   	int k;cin>>k;
	int t=1;cin>>t;
	while(t--){
		func1();
	}
	return 0;
}