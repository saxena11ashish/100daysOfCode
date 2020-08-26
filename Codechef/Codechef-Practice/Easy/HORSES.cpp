#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int s[n];
        for(int i=0;i<n;i++)cin>>s[i];
        sort(s,s+n);
        int ans=s[1]-s[0];
        for(int i=1;i<n-1;i++){
            if(ans>s[i+1]-s[i])
                ans=s[i+1]-s[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
