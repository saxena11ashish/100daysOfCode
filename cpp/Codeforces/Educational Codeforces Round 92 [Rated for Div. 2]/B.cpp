#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,z;cin>>t;
    while(t--){
        cin>>n>>k>>z;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        while(a.size()>k+1){
            a.pop_back();
        }
        int ans = a[0]; k--;
        for(int i=1;i<a.size();i++){
            ans+=a[i];
            if(z>0&& a[i-1] == *max_element(a.begin(),a.end()) /*&& a[i]+a[i-1]>a.back()+a[a.size()-2]*/){
                ans = ans+a[i]+a[i-1];
                z--;
                k-=2;
                a.pop_back();a.pop_back();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
