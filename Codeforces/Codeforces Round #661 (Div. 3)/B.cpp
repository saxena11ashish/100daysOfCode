#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int candy[n],orange[n];
        int minOranges = INT_MAX,minCandies = INT_MAX;
        for(int i=0;i<n;i++)cin>>candy[i];
        for(int i=0;i<n;i++)cin>>orange[i];
        for(int i=0;i<n;i++){
            minOranges = min(minOranges,orange[i]);
            minCandies = min(minCandies,candy[i]);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            int x=candy[i]-minCandies;
            int y=orange[i]-minOranges;
            ans += max(x,y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
