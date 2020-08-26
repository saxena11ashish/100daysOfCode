#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int>m;
    for(char& c:s){
        if(isalpha(c))
            m[c]++;
    }
    cout<<m.size();

    return 0;
}
