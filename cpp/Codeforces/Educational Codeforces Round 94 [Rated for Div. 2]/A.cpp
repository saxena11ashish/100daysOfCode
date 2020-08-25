#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        string s,ans="";
        int n;cin>>n;
        cin.ignore();
        int ones=0,zero=0;
        cin>>s;
        for(char &c:s){
            if(c=='1')ones++;
            else zero++;
        }
        if(ones>=n)
            ans=string(n,'1');
        else
            ans=string(n,'0');
        cout<<ans<<endl;
    }
    return 0;
}
