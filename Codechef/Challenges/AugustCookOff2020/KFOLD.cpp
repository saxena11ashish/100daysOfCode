#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        int n,k;cin>>n>>k;
        cin.ignore();
        cin>>s;
        int ones=0,zeros,count = n/k;
        for(char &c: s){
            if(c=='1')ones++;
        }
        zeros = n - ones;
        string ans="",ans1="",ans2="";
        if(zeros%count==0 && ones%count==0){
            zeros/=count;
            ones/=count;
            while(zeros--)
                ans1+='0';
            while(ones--)
                ans1+='1';
            ans2=ans1;
            reverse(ans2.begin(),ans2.end());
            for(int i=0;i<count;i++){
                if(i%2==0)
                    ans+=ans1;
                else
                    ans+=ans2;
            }

        }
        else{
            ans="IMPOSSIBLE";
        }
        cout<<ans<<endl;
    }
    return 0;
}
