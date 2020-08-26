#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int flag=1;
        if(s1.size()!=s2.size())flag=0;
        else{
            for(int i=0;i<s1.size();i++){
                if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i]){
                    flag=0;
                    break;
                }
            }
        }
        if(flag)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
