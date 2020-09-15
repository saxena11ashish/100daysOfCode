#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
bool prime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)
			return false;
	}
	return true;
}
void func(){
	int a,b;
	cin>>a>>b;
	int l = a/2 * b/2;
	int r = a*b;
	vector<int>v;
	for(int i=a;i<=b;i++){
		if(prime(i))
			v.push_back(i);
	}
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]*v[j]>=l && v[i]*v[j]<=r)
				cout<<v[i]<<","<<v[j]<<endl;
		}
	}
	return;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif
	int t=1;
	// cin>>t;
	while(t--){
		func();
	}
}