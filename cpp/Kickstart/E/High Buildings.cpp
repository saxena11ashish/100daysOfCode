#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    for(int test=1;test<=t;test++){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int buildingsAvailable = n,maxHeight=n;
        a-=c;b-=c;
        vector<int>v;
        while(c--){
            v.push_back(maxHeight);
            buildingsAvailable--;
        }
        maxHeight--;
        while(buildingsAvailable>0 && a--){
            v.insert(v.begin(),maxHeight);
            buildingsAvailable--;
        }
        while(buildingsAvailable>0 && b--){
            v.push_back(maxHeight);
            buildingsAvailable--;
        }
        bool possible = true;
        if(b>0){
            possible=false;
        }
        if(possible){
            while(buildingsAvailable--)
                v.insert(v.begin()+1,1);

            cout<<"Case #"<<test<<": ";
            for(int i:v)cout<<i<<" ";
            cout<<endl;

        }
        else{
            cout<<"Case #"<<test<<": IMPOSSIBLE\n";
        }
    }
    return 0;
}
