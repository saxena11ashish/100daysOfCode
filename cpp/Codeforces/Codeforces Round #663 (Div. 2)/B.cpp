#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;cin>>t;
    while(t--){
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(a[i][m-1]=='R')
                ans++;
        }
        for(int i=0;i<m-1;i++){
            if(a[n-1][i]=='D')
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
