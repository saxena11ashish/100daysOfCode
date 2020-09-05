#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	vector<int>v(n+1,0);
	vector<int> infected(n+1,0);
	vector<int> right(6,0),left(6,0);

	for(int i=1;i<=n;i++){
		cin>>v[i];
		right[v[i]]++;
	}
	// deba(right);
	int greatest = v[0];
	for(int i=1;i<=n;i++){
		greatest=max(greatest, v[i]);
		int curr = v[i];
		right[curr]--;

		for(int j=max(curr,greatest)-1;j>=0;j--)	// speeds less then curr athlete and in front
			infected[i] += right[j];

		for(int j=curr+1;j<=5;j++)	// speeds more then curr athlete and behind
			infected[i] += left[j];

		left[curr]++;
	}
	// deba(infected);
	cout<<*min_element(infected.begin()+1, infected.end())+1<<" "<<*max_element(infected.begin()+1, infected.end())+1<<endl;	
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
/*
*/ 