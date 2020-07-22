/*3n operations -- O(n)time
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>a>>b;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(i>0)v.push_back(i+1);
                v.push_back(1);
                if(i>0)v.push_back(i+1);
            }
        }
        cout<<v.size();
        for(int a:v)cout<<" "<<a;
        cout<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>a>>b;
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i]){
                if(a[0]==b[i])
                    v.push_back(1);
                v.push_back(i+1);
            }
        }
        cout<<v.size();
        for(int a:v)cout<<" "<<a;
        cout<<endl;
    }
    return 0;
}
