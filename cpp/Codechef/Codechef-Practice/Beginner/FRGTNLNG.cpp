#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k;cin>>t;
    while(t--){
        cin>>n>>k;
        string tempString,s[n]; for(int i=0;i<n;i++)cin>>s[i];
        int present[n]={0};

        map<string,int> m;

        while(k--){
            int l;cin>>l;
            while(l--){
                cin>>tempString;
                m[tempString]++;
            }
        }
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end())
                cout<<"YES ";
            else
                cout<<"NO ";
        }
        cout<<endl;
    }
    return 0;
}
