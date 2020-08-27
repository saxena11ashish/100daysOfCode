//	INCORRECT

class Solution {
public:
    int longestValidParentheses(string s) {
        int opening=0, closing=0, temp=0,ans=0,count=0;
        for(char &c :s){
            if(c == ')')
                closing++;
            else
                opening++;
            
            if(closing > opening){
                closing=0;
                opening=0;
            }
            else if(opening == closing)
                ans=max(ans,2*opening);  
        }
        return ans;
    }
};
//")(()())(())(((()))()()))))(((((())(())()(()(((()(())()())()()((()()(())(())((()))()(((((())))))))()()))))("