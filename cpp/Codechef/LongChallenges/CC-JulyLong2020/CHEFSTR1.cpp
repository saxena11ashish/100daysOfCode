#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int prev,temp;
        cin>>prev;
        if(n==1){
            cout<<0;
            continue;
        }
        long ans=0;
        for(int i=1;i<n;i++){
            cin>>temp;
            ans = ans + abs(temp-prev)-1;
            prev = temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
