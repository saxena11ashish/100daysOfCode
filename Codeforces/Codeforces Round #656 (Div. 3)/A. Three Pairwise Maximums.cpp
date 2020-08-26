#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z;cin>>t;
    while(t--){
        cin>>x>>y>>z;
        map<int,int> m;
        m[x]++;m[y]++;m[z]++;
        switch(m.size()){
        case 1:
            cout<<"YES\n"<<x<<" "<<x<<" "<<x<<endl;
            break;
        case 3:
            cout<<"NO\n";
            break;
        case 2:
            map<int,int> :: iterator itr= m.begin();
            if(itr->second==2){
                cout<<"NO\n";break;
            }
            cout<<"YES\n"<<itr->first<<" "<<itr->first<<" ";
            itr++;
            cout<<itr->first<<endl;
        }
    }
    return 0;
}
