#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)         cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)     cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)         cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
    int a[]={19,81,2,41,61,59,28,69,76,88};
    sort(a,a+10);
    deba(a);
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
    freopen("/home/ashish/CPP/inp.txt","r",stdin);
       freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

    int t=1;
    // cin>>t;
    while(t--){
        func();
    }
}