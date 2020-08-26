#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string s;
    cin.ignore();
    while(t--){
        cin>>s;
        if(s.size()<11) cout<<s<<endl;
        else
            cout<<s[0]+to_string(s.size()-2)+s[s.size()-1]<<endl;
    }
    return 0;
}


