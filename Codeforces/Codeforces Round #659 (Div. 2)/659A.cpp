#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int a[n],cn=50;
        for(int i=0;i<n;i++)cin>>a[i];

        string s;
        while(cn--){
            s+='a';
        }
        cout<<s<<endl;
        for(int i=0;i<n;i++){
            int temp =s[a[i]];
            temp = (temp==122? 97:temp+1);
            s[a[i]]=char(temp);
            cout<<s<<endl;
        }
    }
    return 0;
}
