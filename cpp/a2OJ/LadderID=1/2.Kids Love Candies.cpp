#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        int candies[n];
        for(int i=0;i<n;i++){
            cin>>candies[i];
            ans += candies[i]/k;
        }
        cout<<ans<<endl;
    }
    return 0;
}
