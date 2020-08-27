#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_set<char> a;
    for(char& c: s)
        a.insert(c);
    if(a.size()%2==1)cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}
