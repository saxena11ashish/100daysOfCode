#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,temp;cin>>n;
    vector<int>a,sortedA;
    int nn=n;
    while(n--){
        cin>>temp;
        a.push_back(temp);
        sortedA.push_back(temp);
    }
    if(nn==1){
        cout<<"YES\n";return;
    }
    sort(sortedA.begin(),sortedA.end());
    int i=0,gcdd=*min_element(a.begin(),a.end());
    while(i<a.size()){
        if(a[i]==sortedA[i]){
            a.erase(a.begin()+i);
            sortedA.erase(sortedA.begin()+i);
        }
        else
            i++;
    }
    if(a.size()==0){
        cout<<"YES\n";return;
    }
    i=0;bool flag=true;
    while(i<a.size()){
        if(a[i]%gcdd!=0){
            flag=false;
            break;
        }
        i++;
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return;
}
int main(){
    int t=1;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
