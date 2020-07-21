#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    string a,b;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>a>>b;
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if(b[i]==a[i])
                continue;
            else{
                if(b[i]==a[0]){
                    v.push_back(1);
                    v.push_back(i+1);
                }
                else{
                    v.push_back(i+1);
                }
            }
        }
        cout<<v.size();
        for(int i=0;i<v.size();i++)cout<<" "<<v[i];
        cout<<endl;
    }
    return 0;
}
