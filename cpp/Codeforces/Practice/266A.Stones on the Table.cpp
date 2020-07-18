#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;cin>>n;
    string s;
    cin.ignore();
    cin>>s;
    char prev=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]==prev)ans++;
        else prev=s[i];
    }
    cout<<ans;
    return 0;
}
