#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int b[n],temp;
	for(int j=0;j<n;j++)
		cin>>b[j];
	// deba(b);
	for(int i=1;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>temp;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[i]==a[j][0]){
				for(int k=0;k<m;k++){
					cout<<a[j][k]<<" ";
				}
				cout<<endl;
				break;
			}
		}
	}

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