#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        vector<int>v;
        int ten=1;
        while(n>0){
            if(n%10!=0)
                v.push_back((n%10)*ten);
            ten *= 10;
            n/=10;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
