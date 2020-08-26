class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        vector<vector<int>>v;
            return v;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-2;i++){
            if(i==0 || a[i]!=a[i-1]){
                int l = i+1;
                int r = a.size()-1;
                while(l<r){
                    if(a[l] + a[r] + a[i] == 0){
                        v.push_back({a[i],a[l],a[r]});
                        while(l<r && a[l] == a[l+1])l++;
                        while(l<r && a[r] == a[r-1])r--;
                        l++;r--;
                    }
                    else if(a[l] + a[r] + a[i] < 0)
                        l++;
                    else 
                        r--;
                }
            }
        }
        return v;
    }
};