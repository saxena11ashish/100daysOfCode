#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//

void func(){
	int n,m;
	cin>>n>>m;
	int i_rating[n], rating[n][m], rank[n][m]={0};
	for(int i=0;i<n;i++)cin>>i_rating[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>rating[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==0)
				rating[i][j]+=i_rating[i];
			else
				rating[i][j]+=rating[i][j-1];
			// cout<<rating[i][j]<<" ";
		}
		// cout<<endl;
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			int temp = rating[i][j];
			int t_rank = 1;
			for(int x=0;x<n;x++){
				if(x==i)continue;
				if(rating[x][j]>temp)
					t_rank++;
			}
			rank[i][j] = t_rank;
		}
	}
	// for(int i=0;i<n;i++){//Rank print
	// 	for(int j=0;j<m;j++){
	// 		cout<<rank[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int ans=0;
	for(int i=0;i<n;i++){
		int bestRank = INT_MAX,bestRankIndex;
		int bestRating = *max_element(rating[i],rating[i]+m);
		for(int j=0;j<m;j++){
			if(rank[i][j]<bestRank){
				bestRank=rank[i][j];
				bestRankIndex=j;
			}
		}
		if(rating[i][bestRankIndex]!=bestRating){
			// deb(rating[i][bestRankIndex]);
			ans++;
		}
	}
	cout<<ans<<endl;
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