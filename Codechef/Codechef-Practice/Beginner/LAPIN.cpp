#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.size();
        string left = s.substr(0,len/2);
        string right = s.substr((len+1)/2, len-1);
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        cout<<(right==left ? "YES\n":"NO\n");
    }
    return 0;
}
