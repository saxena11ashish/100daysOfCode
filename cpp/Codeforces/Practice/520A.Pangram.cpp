#include<bits/stdc++.h>
using namespace std;

int main(){
    bool present[26]={0};
    string ss;
    int n;cin>>n;
    cin.ignore();cin>>ss;
    unordered_set<char>s;
    for(char &c: ss){
        s.insert(tolower(c));
    }
    if(s.size()==26)cout<<"YES";
    else cout<<"NO";

    return 0;
}
