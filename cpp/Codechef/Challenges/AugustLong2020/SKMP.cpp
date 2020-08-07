#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    int t;cin>>t;
    cin.ignore();
    while(t--){
        cin>>s>>p;
        map<char,int>m;
        for(char &c: s)m[c]++;
        for(char &c: p)m[c]--;
        bool p0isSmallest = true;
        for(int i=1;i<p.size();i++){
            if(p[i]<p[0]){
                p0isSmallest = false;
                break;
            }
        }
        map<char,int>::iterator itr = m.begin();
        string ans="";
        while(itr!=m.end() && itr->first < p[0]){
            while(itr->second--)
                ans+=itr->first;
            itr++;
        }
        if(itr->first == p[0]){
            if(p0isSmallest){
                while(itr->second--)
                    ans+=itr->first;
                ans+=p;
            }
            else{
                ans+=p;
                while(itr->second--)
                    ans+=itr->first;
            }
            itr++;
        }
        else if(itr->first < p[0])
            ans+=p;
        while(itr!=m.end()){
            while(itr->second--)
                ans+=itr->first;
            itr++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
