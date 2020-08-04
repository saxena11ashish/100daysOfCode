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