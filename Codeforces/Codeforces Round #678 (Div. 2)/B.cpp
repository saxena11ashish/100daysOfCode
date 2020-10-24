#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
bool isPrime(int n) { 
    if (n <= 1) 
        return false; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
    return true; 
}
int nextGreaterPrime(int n){
	while(1){
		if(isPrime(n))
			return n;
		else n++;
	}
}
void func(){
	int n;cin>>n;
	int temp = n-1;
	
	int x = nextGreaterPrime(temp+1);
	while(isPrime(x-temp)){
		x = nextGreaterPrime(x+1);
	}
	for(int j=1;j<=temp;j++){
		for(int i=1;i<=temp;i++)
			cout<<1<<" ";
		cout<<x-temp<<endl;
	}
	for(int i=1;i<=temp;i++)
		cout<<x-temp<<" ";
	temp = temp*(x-temp);
	int y= nextGreaterPrime(temp+1);
	while(isPrime(y-temp)){
		y = nextGreaterPrime(y+1);
	}
	cout<<y-temp<<endl;
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