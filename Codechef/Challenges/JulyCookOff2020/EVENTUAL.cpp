#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;string s;cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>s;
        if(n%2!=0){
            cout<<"NO\n";continue;
        }
        int frequency[26]={0};
        for(int j=0;j<n;j++)
            frequency[s[j] - 97]++;
        bool flag=true;
        for(int j=0;j<26;j++){
            if(frequency[j]%2!=0){
                flag=false;break;
            }
        }
        if(flag==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


