#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m;
    int z,x,c,v;
    cin>>z>>x>>c>>v;
    m[z]++;m[x]++;m[c]++;m[v]++;
    cout<<4-m.size();
    return 0;
}
