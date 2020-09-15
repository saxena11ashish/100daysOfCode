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
	string s = to_string(n);
	int start=0,end=0;
	int sum=0;
	int maxSum=0,l=0,r=0;
	for(int i=0;i<s.size()-1;i++){
		sum+=(s[i]-'0');
		if(s[i+1] > s[i])
			end++;
		else{
			if(sum > maxSum){
				maxSum=sum;
				l=start;
				r=end;
			}
			sum=0;
			start = i+1;
			end = i+1;
		}
	}
	cout<<maxSum<<":"<<l+1<<"-"<<r+1;
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