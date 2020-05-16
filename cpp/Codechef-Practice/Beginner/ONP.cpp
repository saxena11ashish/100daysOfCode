// infix to postfix
#include<bits/stdc++.h>
using namespace std;
int precedence(char a){
    switch (a){
        case '+':
        case '-':return 0;
        case '*':
        case '/':return 1;
        case '^':return 2;
        case '(':return 3;
    }
}
int main() {
    int t;cin>>t;
    while(t--){
        string s,ans="";cin>>s;
        stack<char> character;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                ans+=s[i];
            else if(s[i]=='(' || s[i]=='^')
                character.push(s[i]);
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                while(character.size()>0 && character.top()!='(' && (precedence(character.top()) >= precedence(s[i]))){
                    ans+=character.top();character.pop();
                }
                character.push(s[i]);
            }
            else if(s[i]==')'){
                while(character.top()!='('){
                    ans+=character.top();character.pop();
                }
                character.pop();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
