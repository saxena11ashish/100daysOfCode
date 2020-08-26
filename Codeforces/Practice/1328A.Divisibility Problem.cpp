#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        int ans=0;
        if(a<b)ans = b-a;
        else if(a%b==0){}
        else{
            b = ((a/b)+1) * b;
            ans=b-a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
