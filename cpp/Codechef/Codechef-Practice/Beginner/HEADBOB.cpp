#include<iostream>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s,ans="NOT SURE";
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                ans="INDIAN";
                break;
            }
            else if(s[i]=='Y'){
                ans="NOT INDIAN";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

