#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string s){
    stack<char> storage;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){
            storage.push(s[i]);
            continue;
        }
        if(storage.empty())
            return false;
        switch(s[i]){
        case '}':
            if(storage.top()!='{')
                return false;
            storage.pop();
            break;
        case ')':
            if(storage.top()!='(')
                return false;
            storage.pop();
            break;
        case ']':
            if(storage.top()!='[')
                return false;
            storage.pop();
            break;
        }
    }
    return storage.empty();
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(isBalanced(s))
            cout<<"balanced\n";
        else
            cout<<"not balanced\n";
    }
    return 0;
}
