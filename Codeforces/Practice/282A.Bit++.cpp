#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string s;
    cin.ignore();
    int ans=0;
    while(t--){
        cin>>s;
        if(s[1]=='+')ans++;
        else ans--;
    }
    cout<<ans;
    return 0;
}
