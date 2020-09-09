#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

lli help(lli n){
    return (n*(n-1))/2;
}

void func(){
	lli n;cin>>n;
	lli seqSum=0;
	if(n%2==0)
		seqSum = (n/2)*(n+1);
	else
		seqSum = n*((n+1)/2);
	if(n<3 || seqSum %2!=0){
		cout<<0<<endl;
		return;
	}
	lli x = n;
	lli temp = 0;
	int tt=1000000000;
	
	// deb(smallSum);
	while(tt>1){
		lli sum_x = (x*(x+1))/2;
		lli sum_xmt = ((x-tt)*((x-tt)+1))/2;
		lli smallSum = sum_x - sum_xmt;
		while(x>tt && temp+smallSum < seqSum/2){

			temp += smallSum;
			sum_x = sum_xmt;
			x-=tt;
			sum_xmt = ((x-tt)*((x-tt)+1))/2;
			smallSum = sum_x - sum_xmt;
			// deb2(sum_xmt,sum_x);
		}	
		tt/=10;
	}
	
	while(temp < seqSum/2){
		temp += x;
		x--;
	}
	lli ans = n-x;
	lli a=x,b=n-x;
	// deb2(n,x);
	if(temp == seqSum/2)
		ans = ans + help(a)+help(b);
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