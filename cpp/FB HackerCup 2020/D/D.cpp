#include<bits/stdc++.h>
#define llmax 9223372036854775807
using namespace std;

long long int calculateMinCost(long long int* a, int n, int m, long long int* cost){
    if(n<=m+1)return 0;

    //else if(n > m+1)
    for(int i=1;i <= m ;i++){
        if(a[i]==0)
            cost[i]=llmax;
        else if(cost[i]==0)
            cost[i]=a[i]+calculateMinCost(a+i,n-i,m,cost+i);//saves time using memoization
    }
    return *min_element(cost+1, cost+1+m);
}
int main(){
    int t,n,m;cin>>t;
    for(int test=1;test<=t;test++){
        cin>>n>>m;
        long long int c[n];
        long long int v[n]={0};
        for(int i=0;i<n;i++)cin>>c[i];
        long long int cost = calculateMinCost(c,n,m,v);
        long long int temp=cost;
        for(int i=0;i<n;i++){
            temp-=c[i];
        }
        if(temp>0)cost=-1;

        cout<<"Case #"<<test<<": "<<cost<<endl;
    }
    return 0;
}
