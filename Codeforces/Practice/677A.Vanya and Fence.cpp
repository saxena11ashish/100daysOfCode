#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,temp,ans=0;cin>>n>>h;
    while(n--){
        cin>>temp;
        if(temp>h)
            ans+=2;
        else ans++;
    }
    cout<<ans;
    return 0;
}
