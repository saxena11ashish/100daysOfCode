#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        n*=2;
        unordered_map<int,int> m;
        int temp;
        while(n--){
            cin>>temp;
            if(m[temp]>0)
                cout<<temp<<" ";
            else
                m[temp]++;
        }
        cout<<endl;
    }
    return 0;
}



