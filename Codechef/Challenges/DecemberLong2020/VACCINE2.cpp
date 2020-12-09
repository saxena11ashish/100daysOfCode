#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	lli n,d,atRisk=0,notAtRisk=0;
	cin>>n>>d;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]>=80 || v[i]<=9)
			atRisk++;
		else
			notAtRisk++;
	}
	cout<<atRisk/d + notAtRisk/d + (atRisk%d == 0 ? 0:1) + (notAtRisk%d == 0 ? 0:1)<<endl;
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