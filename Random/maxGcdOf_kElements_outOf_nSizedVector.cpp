#include <bits/stdc++.h>

using namespace std;

#define fastIO       ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//
int maxGcd(vector<int> v, int k){
	int factors[v.size()+1]={0};
	for(int i:v){
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0)
				factors[j]++;
			if(j!=i/j)
				factors[i/j]++;
		}
	}
	for(int i=v.size();i>=1;i--){
		if(factors[i]>=k)
			return i;
	}
}
void func(){
	vector<int> v = {1,3,4,2,12,12};
	int k = 3;
	cout<<maxGcd(v,k);
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	cin>>t;
	while(t--){
		func();
	}
}