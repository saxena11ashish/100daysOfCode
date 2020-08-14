string Solution::longestCommonPrefix(vector<string> &a) {
    string lcp = a[0];
    for(int i=0;i<a.size();i++){
        int j;
        for(j=0;j<min(lcp.size(),a[i].size());j++){
            if(lcp[j]!=a[i][j])
                break;
        }
        lcp = a[i].substr(0,j);
    }
    return lcp;
}
