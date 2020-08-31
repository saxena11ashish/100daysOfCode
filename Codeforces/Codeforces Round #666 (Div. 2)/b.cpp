#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
int nthRoot(int A, int N) 
{ 
    
    double xPre = rand() % 10; 
    double eps = 1e-3; 
    double delX = INT_MAX; 
    double xK;
    while (delX > eps){ 
        xK = ((N - 1.0) * xPre + (double)A/pow(xPre, N-1)) / (double)N; 
        delX = abs(xK - xPre); 
        xPre = xK; 
    } 
    return int(xK); 
}

void func(){
	int n;cin>>n;
	vector<lli> v;
	lli temp;
	int nn=n;while(nn--){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	// deba(v);
	lli ans=(v[0] == 1 ? 0 : v[0]-1);

	int size = v.size();
	int x = nthRoot(v.back(),size-1);
	temp = pow(x,size-1);deb(temp);
	if(temp != v.back()){
		ans+= abs(temp - v.back());
	}
	for(int i=size-2;i>0;i--){
		temp/=x;
		ans+= abs(temp - v[i]);
	}
	deb(temp);
	// cout<<ans<<endl;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	// cin>>t;
	while(t--){
		func();
	}
}