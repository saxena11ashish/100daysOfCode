#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;int a[n];
        unordered_map<int,int>m;
        unordered_map<int,int>elements;
        for(int i=0;i<n;i++){
            cin>>a[i];
            elements[a[i]]++;
        }
        if(elements.size() == n){
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    m[a[i]+a[j]]++;
                }
            }
            int k=0;
            unordered_map<int,int> ::iterator itr = m.begin();
            while(itr!=m.end()){
                k = max(k,itr->second);
                itr++;
            }
            cout<<k<<endl;
            continue;
        }
    }
    return 0;
}
