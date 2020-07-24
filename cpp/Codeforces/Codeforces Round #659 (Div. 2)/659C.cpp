#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>a>>b;
        bool possible =true;
        int small=0,ans=0;
        for(int i=0;i<a.size(); ){
            if(a[i]==b[i])i++;
            else if(a[i]-b[i]>0){
                possible=false;
                break;
            }
            else{
                while(a[i]==a[i+1]&&b[i]==b[i+1] && i<n-1){
                    i++;
                }
                ans++;
                i++;
            }
        }
        if(possible)cout<<ans<<endl;
        else cout<<-1;
    }
    return 0;
}
