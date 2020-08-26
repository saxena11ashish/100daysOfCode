//	Runs faster
class Solution {
public:
    string help(vector<string>& s){
        string prefix = s[0];
        for(int i = 1; i < s.size() && prefix!=""; i++){
            while(s[i].find(prefix) != 0)       // till the time we can't find prefix in s[i],remove last element from prefix
                prefix = prefix.substr(0, prefix.size()-1);
        }
        return prefix;
    }
    string longestCommonPrefix(vector<string>& s){
        if(s.size()==0)return "";
        if(s.size()==1)return s[0];        
        return help(s);
    }
};

//	BRUTE FORCE , sorts in O(n lgn),then runs for length of shortest string
/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& s){
        if(s.size()==0)return "";
        if(s.size()==1)return s[0];        
        sort(s.begin(),s.end());
        string ans = "";
        for(int i=0;i<s[0].size();i++){
            if(s[0][i] == s[s.size()-1][i])
                ans += s[0][i];
            else
                break;
        }
        return ans;
    }
};
*/