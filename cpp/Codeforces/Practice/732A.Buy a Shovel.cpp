#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int i=1,ans=1;
    if(k%10==0 || k==r)ans=1;

    else{
        while((k*i) %10 != 0 && (k*i) %10 != r){
            ans++;i++;
            if(ans==10)break;
        }
    }
    cout<<ans;
    return 0;
}
