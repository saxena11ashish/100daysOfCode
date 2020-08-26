int Solution::maxArr(vector<int> &a) {
    int n = a.size();
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int i=0;i<n;i++){
        max1 = max(max1,a[i]+i);
        max2 = max(max2,-a[i]+i);
        min1 = min(min1,a[i]+i);
        min2 = min(min2,-a[i]+i);
    }
    return max(max1-min1,max2-min2);
}
