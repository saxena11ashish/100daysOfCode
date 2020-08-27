#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>s;
        int x=0;
        stack<int> zero;
        stack<int> one;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(zero.empty()){
                    v.push_back(++x);
                    one.push(x);
                }
                else{
                    v.push_back(zero.top());
                    one.push(zero.top());
                    zero.pop();
                }
            }
            else{
                if(one.empty()){
                    v.push_back(++x);
                    zero.push(x);
                }
                else{
                    v.push_back(one.top());
                    zero.push(one.top());
                    one.pop();
                }
            }
        }
        cout<<x<<endl;
        for(int i:v)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
