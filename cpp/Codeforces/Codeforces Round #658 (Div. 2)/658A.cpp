#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;cin>>t;
    while(t--){
        cin>>n>>m;
        int b[m];
        int temp;
        bool found=false;
        unordered_map<int,int>mm;
        for(int i=0;i<n;i++){
            cin>>temp;
            mm[temp]++;
        }
        for(int i=0;i<m;i++)
            cin>>b[i];
        for(int i=0;i<m;i++){
            if(mm[b[i]]>0){
                cout<<"YES\n"<<1<<" "<<b[i]<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"NO\n";
        }
    }
    return 0;
}
