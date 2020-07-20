#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int home[n],temp;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>home[i]>>temp;
        m[temp]++;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=m[home[i]];
    }
    cout<<ans;
    return 0;
}
