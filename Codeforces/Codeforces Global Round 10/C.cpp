#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],op[n]={0},ans=0;
        for(int i=0;i<n;i++)cin>>a[i];
        int mustBe = a[0];
        for(int i=1;i<n;i++){
            if(a[i] > mustBe)
                mustBe = a[i];
            else if(a[i] == mustBe){}
            else
                op[i]= mustBe - a[i];
        }
        for(int i=1;i<n;){
            if(op[i]==0)i++;
            else{
                int j=i,mini = op[i];
                while(op[j]>0 && j<n){
                    mini = min(mini,op[j]);
                    j++;
                }
                ans+=mini;
                for(int x = i;x<j;x++)
                    op[x]-=mini;
            }
        }
        cout<<ans<<endl;
    }
}
