#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int count = 0;
	vector<int> v;
	for(int i=0;i<n;i++){
		if(a[i]==0)count++;
		else{
			if(count>0){
				v.push_back(count);
				count=0;
			}			
		}
	}
	// if(count>0)v.push_back(count);
	// for(int i:v)cout<<i<<" ";
	int maxValue=0,maxCount=0;
	for(int i:v){
		if(i>maxValue){
			maxValue=i;
			maxCount=1;
		}
		else if(i==maxValue)
			maxCount++;
	}
	// deb2(maxValue,maxCount);
	if(maxCount!=1 || maxValue % 2 == 0)
		cout<<"No\n";
	else cout<<"Yes\n";
	return;
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