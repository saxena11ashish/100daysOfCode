class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int unique=0;
        for(int i : nums){
            if(i!=nums[unique])
                nums[++unique] = i;
        }
        return unique+1;
    }
};
/*
class Solution {	//BEATS 38%
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)return 0;
        nums.erase(  unique(nums.begin(),nums.end())  , nums.end()  );
        //unique() is STL function which gives an iterator after last unique element in the vector
        //so from this vector till the end of vector, everything is erased ans we are left with unique elements
        return nums.size();
    }
};
 */
/*	BEATS 70%
class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int size = v.size();
        for(int i=0;i<size-1;i++){
            int j = i+1,count=0;
            while(j<=size-1 && v[i] == v[j]){
                j++;count++;
            }
            for(int k=j;k<=size-1;k++){
                v[k-count] = v[k];
            }
            size -= count;
        }
        return size;
    }
};
*/