#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans
    ;
    int t;cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        ans = "";
        ans += s[0];
        for(int i=1;i<s.size()-1;i+=2)
            ans += s[i];
        ans+=s[s.size()-1];
        cout<<ans<<endl;
    }
    return 0;
}
