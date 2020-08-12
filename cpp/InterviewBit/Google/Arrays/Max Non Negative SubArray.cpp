//  HAS ERROR

vector<int> Solution::maxset(vector<int> &v) {
    vector<int> temp;
    vector<int> ans;
    long long int smallSum=0, maxSum=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]<0){ //when -ve encountered, check if current sum is larger than maxSUM
            if(smallSum>maxSum){
                maxSum = smallSum;
                ans = temp;
                temp.clear();
                smallSum=0;
            }
        }
        else{
            temp.push_back(v[i]);
            smallSum+=v[i];
        }
    }
    return ans;
}
