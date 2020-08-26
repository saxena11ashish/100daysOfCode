#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    unordered_set<int> s;
    int x,temp;cin>>x;
    while(x--){
        cin>>temp;
        s.insert(temp);
    }
    int y;cin>>y;
    while(y--){
        cin>>temp;
        s.insert(temp);
    }
    if(s.size()==n)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}
