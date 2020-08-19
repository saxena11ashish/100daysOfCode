int Solution::maxSubArray(const vector<int> &a) {
    int ans=INT_MIN,tempAns=0,n=a.size();
    if(n==0)return 0;
    for(int i=0;i<n;i++){
        tempAns = max(0,tempAns)+a[i];
        ans = max(ans,tempAns);
    }
    return ans;
}
