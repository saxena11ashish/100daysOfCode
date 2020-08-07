#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,pc,pr;cin>>t;
    while(t--){
        cin>>pc>>pr;
        pc = (pc%9==0 ? pc/9 : pc/9+1);
        pr = (pr%9==0 ? pr/9 : pr/9+1);
        if(pr<=pc)
            cout<<1<<" "<<pr<<endl;
        else
            cout<<0<<" "<<pc<<endl;
    }
    return 0;
}
