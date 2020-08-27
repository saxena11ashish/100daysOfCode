#include<bits/stdc++.h>
using namespace std;
int n,k,w,abcdL[4],abcdH[4];
long long mod = 1000000007;
long long int sol(){
    long long int ans = 1;
    long long int previousPerimeter = 0;
    cin>>n>>k>>w;
    long long int l[n+1]={0},h[n+1]={0},peri[n+1]={0};
    for(int i=1;i<=k;i++)cin>>l[i];
    for(int i=0;i<4;i++)cin>>abcdL[i];
    for(int i=1;i<=k;i++)cin>>h[i];
    for(int i=0;i<4;i++)cin>>abcdH[i];  //I/P complete
    long long int maxHeight = h[0];
    for(int i=1;i<=n;i++){
        if(i>k){
            h[i] = ((abcdH[0] * h[i-2] + abcdH[1] * h[i-1] + abcdH[2]) % abcdH[3]) +1;
            l[i] = ((abcdL[0] * l[i-2] + abcdL[1] * l[i-1] + abcdL[2]) % abcdL[3]) +1;
        }

        if(i==1 || l[i]-w > l[i-1]){        //first rectangle or a rectangle that doesn't share the area with previous one
            peri[i] = 2*(h[i]+w) + peri[i-1];
            maxHeight = h[i];
        }
        else{
            maxHeight = max(maxHeight,h[i]);
            int j=i;
            long long int compensation=0;
            while(j>=2 && l[j]-w<=l[j-1]){
                j--;
                if((h[j] > h[j+1] && h[j] <= maxHeight) || (h[j] < h[j+1] && h[j] < maxHeight))
                    compensation+=abs(h[j]-h[j+1]);
            }
             peri[i]= 2*(maxHeight + (l[i]-l[j]+w)) +compensation+ peri[j-1];
        }
    }
    for(int i=1;i<=n;i++)
        ans = ((ans% mod) * (peri[i]% mod)) % mod;

        //ans = (ans * peri[i]) % mod;
    return ans;
}
int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        long long int a = sol();
        cout<<"Case #"<<i<<": "<<a<<endl;

    }
}
