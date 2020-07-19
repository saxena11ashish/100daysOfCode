#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        unordered_map<long long,int>m;
        for(int i=0;i<n;i++)cin>>a[i];
        bool unique=true;
        for(int l=0;l<n && unique;l++){
            long long prev=0;
            for(int r=l;r<n;r++){
                prev=(prev|a[r]);
                if(m[prev]>0){
                    m[prev]++;
                    unique=false;
                    break;
                }
                m[prev]++;
            }
        }
        if(unique)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

/*
        if(unique)
        unique=true;
        unordered_map<long long,int>:: iterator itr=m.begin();
        while(itr!=m.end()){
            if(itr->second>1){
                cout<<"NO\n";
                unique=false;break;
            }
            itr++;
        }
        if(unique)cout<<"YES\n";*/
