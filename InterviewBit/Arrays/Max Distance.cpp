int Solution::maximumGap(const vector<int> &a) {
    vector<pair<int,int> > v;
    int n = a.size();
    for(int i=0;i<n;i++){
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end());
    int maxIndex = v[n-1].second, ans=0;
    for(int i=n-2;i>=0;i--){
        if(maxIndex > v[i].second)
            ans = max (ans,maxIndex - v[i].second);
        else
            maxIndex = v[i].second;
    }
    return ans;
}
