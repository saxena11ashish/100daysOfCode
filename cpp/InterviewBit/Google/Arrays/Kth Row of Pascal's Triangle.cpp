vector<int> Solution::getRow(int k) {
    if(k == 0)return {1};
    if(k == 1)return {1,1};
    vector<int> v(k+1);
    v[0]=1;v[1]=1;
    for(int i = 2; i <= k ;i++){
        for(int j=0;j<k-1;j++){
            v[j] = v[j] + v[j+1];
        }
        v.insert(v.begin(),1);
        v.resize(v.size()-1);
    }
    return v;
}
