#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0)
            return false;
    } 
    return true;
}
int nextPrime(int n){
	while(1){
		if(isPrime(n)){
			return n;
		}
		n++;
	}
}
void func(){
	lli l,r;
	cin>>l>>r;
	if(l==1){
		cout<<-1<<endl;
		return;
	}
	if((r%2==0 && l<=r/2) ||(r%2!=0 && l<r/2))
		cout<<nextPrime(r)<<endl;
	else
		cout<<r<<endl;
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