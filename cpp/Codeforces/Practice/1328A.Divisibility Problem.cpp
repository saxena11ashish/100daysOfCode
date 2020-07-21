#include<bits/stdc++.h>
using namespace std;
int main(){
    int aa;
    int t;cin>>t;
    int a,b;
    while(t--){
        cin>>a>>b;
        int ans=0;
        if(a<b)ans=b-a;
        else if(a==b)ans=0;
        else {
            while(a%b!=0){
                ans++;a++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
