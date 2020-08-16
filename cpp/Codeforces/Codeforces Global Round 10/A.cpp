#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        unordered_map<int,int> m;
        while(n--){
            cin>>temp;
            m[temp]++;
        }
        if(m.size()>1)
            cout<<1<<endl;
        else
        cout<<m[temp]<<endl;
    }
}
