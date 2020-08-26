//	Single pass, O(n) time and O(n) space

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int> m;
        m[a[0]]=0;
        for(int i=1;i<a.size();i++){
            int x=target-a[i];
            if(m.find(x)!=m.end()){
                return {m[x],i};
                
            }
            else 
                m[a[i]]=i;            
        }
        return{0};
    }
};