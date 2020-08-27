#include<bits/stdc++.h>
using namespace std;
int helper(string xy,string yx){
    int x=stoi(xy,0,2);
    int y=stoi(yx,0,2);
    return x-y;
}
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        string s[n];
        for(int i=0;i<n;i++){
            s[i] = bitset<32>(a[i]).to_string();
            s[i].erase(0,min(s[i].find_first_not_of('0'),s[i].size()-1));
        }
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                ans=max(helper(s[i]+s[j],s[j]+s[i]), ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
