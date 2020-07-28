class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0], ans = nums[0];
        for(int i=1;i<nums.size();i++){
            maxSoFar = max(maxSoFar+nums[i], nums[i]);            
            ans = max(ans, maxSoFar);            
        }
        return ans;
    }
};	//This is faster

/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN, smallAns=0;
        for(int i=0;i<nums.size();i++){
            smallAns+=nums[i];
            ans = max(ans, smallAns);
            if(smallAns < 0)
                smallAns = 0;
        }
        return ans;
    }
};
*/