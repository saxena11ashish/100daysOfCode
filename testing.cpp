#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)         cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)     cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;
#define deba(a)         for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){

    int n;cin>>n;
    int pos = 1;
    int ans[10] = {0};
    while(n>0){
        ans[n%10] = pos;
        pos++;
        n/=10;
    }

    for(int i=9;i>0;i--){
        if(ans[i]!=0)
            cout<<ans[i];
    }
}


//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
    freopen("/home/ashish/CPP/inp.txt","r",stdin);
    freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif
    
    cout<<"ashishasas";
    int t=1;
    // cin>>t;
    while(t--){
        // func();
    }
}