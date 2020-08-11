#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        unordered_map<int,int>m;
        for(int i:a)
            m[i]++;
        ll ans=0;
        unordered_map<int,int>::iterator it = m.begin();
        while(it!=m.end()){
            if(it->second>1)
            ans+=it->second;
            it++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
