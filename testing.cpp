#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)         cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)     cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)         cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
    int a[620721];
    for(int i=0;i<620721;i++)
        cin>>a[i];
    for(int i=0;i<620720;i++)
        if((a[i]&a[i+1]) == 0)
            cout<<" : ";
    // deba(a);
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
    freopen("/home/ashish/CPP/inp.txt","r",stdin);
       freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif
    cout<<(2&1);
    int t=1;
    // cin>>t;
    while(t--){
        // func();
    }
    // int x=1;
    // while(x*2<1000000)
    //     x*=2;
    // cout<<x;
    // int y = 524288;
    // int count=0;
    // // while(y!=1){
    // //     y/=2;
    // //     count++;
    // // }
    // deb(count);
    // cout<<y*2;
    // 524288
    // count = 0
    // 1048576
}
