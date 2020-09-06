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
	int v[n]={0};
	int infected[n]={0};

	for(int i=0;i<n;i++)
		cin>>v[i];

	int fastest = v[0];
	for(int i=0;i<n;i++){
		
		fastest = max(fastest,v[i]);
		int slowest=v[i];

		for(int j=i+1;j<n;j++){		// speeds less then curr athlete and in front
			if(v[j] < fastest)
				infected[i]++;
			slowest = min(slowest,v[j]);
		}
		for(int j=0;j<i;j++){		// speeds more then curr athlete and behind
			if(v[j] > slowest)
				infected[i]++;
		}
	}

	// deba(infected);
	cout<<*min_element(infected, infected+n)+1<<" "<<*max_element(infected, infected+n)+1<<endl;	
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