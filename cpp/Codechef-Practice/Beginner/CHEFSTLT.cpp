#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int mini=0,a=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!='?' && s2[i]!='?' && s1[i]-s2[i]!=0)
                mini++;
            if(s1[i]=='?' || s2[i]=='?')a++;
        }
        cout<<mini<<" "<<mini+a<<endl;
    }
    return 0;
}
