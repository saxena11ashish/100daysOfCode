vector<int> Solution::maxset(vector<int> &a) {
    vector<int> temp,ans;
    long long int maxl = INT_MIN,maxSum=INT_MIN,sum=0;
    for(int i=0;i<a.size();i++){
        if(a[i]>=0){
            temp.push_back(a[i]);
            sum+=a[i];
            if(sum>maxSum || (sum==maxSum && temp.size() > ans.size())){
                maxSum = sum;
                ans.clear();
                ans = temp;
            }
        }
        else if(a[i]<0) {
            temp.clear();
            sum = 0;
        }
    }
    return ans;
}
