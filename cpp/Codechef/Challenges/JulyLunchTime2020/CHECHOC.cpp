#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int ans=0;
        if(2*x<=y)
            ans=m*n*x;
        else{
            ans=(m*n)/2;
            ans*=y;
            if((m*n) % 2== 1)
                ans+=min(x,y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,x,y;
        int ans=0;
        cin>>n>>m>>x>>y;
        if(2*x>y){
            ans=((m*n)/2)*y;
            if((m*n)%2==1)
                 ans+=min(x,y);
        }
        else
            ans=m*n*x;
        cout<<ans<<endl;
    }
    return 0;
}
*/
