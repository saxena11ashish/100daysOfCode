class Solution {
public:
    string convert(string s, int n) {
        if(n==1 || n>=s.size())return s;
        string strArr[n];
        int i = 0;
        bool increasing = true;
        for(char&c : s){
            strArr[i]+=c;
            if(i<n-1 && increasing)i++;
            else{
                i--;
                increasing = false;
                if(i==0)increasing = true;
            } 
            
        }
        string ans="";
        for(string a: strArr)
            ans+=a;
        return ans;
    }
};