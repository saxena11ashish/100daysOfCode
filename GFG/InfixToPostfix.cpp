#include<bits/stdc++.h>
using namespace std;
int precedence(char a){
    switch(a){
    case '(':return 0;
    case '+':
    case '-':return 1;
    case '*':
    case '/':return 2;
    case '^':return 3;
    }
}
void postfix(string s){
    string ans="";
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i]))
            ans+=s[i];
        else if(s[i]=='(' || s[i]=='^')
            op.push(s[i]);
        else if(s[i]==')'){
            while(!op.empty() || op.top()!='('){
                ans+=op.top();
                op.pop();
            }
            op.pop();
        }
        else{
            while(precedence(op.top()) >=  precedence(s[i])){
                ans+=op.top();
                op.pop();
            }
            op.push(s[i]);
        }
    }
    cout<<ans<<endl;
}
int main() {
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        postfix(s);
    }
    return 0;
}
