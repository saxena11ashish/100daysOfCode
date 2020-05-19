#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int zeros=0,ones=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')ones++;
            else zeros++;
        }
        if(zeros==1 || ones==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
