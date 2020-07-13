#include<iostream>
using namespace std;
int main() {
    int n,k,ans=0,temp;
    cin>>n>>k;
    while(n--){
        cin>>temp;
        if(temp%k==0)
            ans++;
    }
    cout<<ans;
    return 0;
}
