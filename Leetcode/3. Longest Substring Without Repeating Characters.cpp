class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1)return s.size();
        int i=0,size=1,maxSize=1;
//        bitset<256>present;   //memory wise better to use
        bool present[256]={0};  //time wise better to use
        present[int(s[0])]=1;
        for(int j=1;j<s.size();j++){
            int character = int(s[j]);
            if(present[character]){
                while(s[i]!=s[j]){
                    present[int(s[i])]=0;
                    i++;size--;    
                }
                i++;
            }
            else{
                size++;
                present[character]=1;
                maxSize = max(size,maxSize);
            }
        }
        return maxSize;
    }
};