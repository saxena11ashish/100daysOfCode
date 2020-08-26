class Solution {
public:
    bool isValid(string str) {
        if(str.size()==0) return true;
        stack<char> s;
        for(char &c : str){
            if(c=='(' ||c=='{' ||c=='[')
                s.push(c);
            else if(s.size()==0){
                return false;
            }
            else{
                if(c == ')'){
                    if(s.top()=='(')
                        s.pop();
                    else
                        return false;
                }
                if(c == ']'){
                    if(s.top()=='[')
                        s.pop();
                    else
                        return false;
                }
                if(c == '}'){
                    if(s.top()=='{')
                        s.pop();
                    else
                        return false;
                }
            }
        }
        
        return s.size() == 0; 
    }
};