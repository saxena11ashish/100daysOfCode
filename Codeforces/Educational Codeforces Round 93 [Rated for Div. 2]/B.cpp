#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        vector<int>v;
        int size=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(size>0)
                    v.push_back(size);
                size=0;
            }
            else size++;
        }
        if(size>0)v.push_back(size);
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i-=2)
            ans+=v[i];
        cout<<ans<<endl;
    }
    return 0;
}
