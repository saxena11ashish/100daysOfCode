#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

lli help(lli n){
	lli k=2;
	lli C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (lli i = 1; i <= n; i++){
        for (lli j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k];
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