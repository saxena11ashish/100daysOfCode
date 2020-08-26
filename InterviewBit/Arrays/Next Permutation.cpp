vector<int> Solution::nextPermutation(vector<int> &a) {
    int n = a.size();
    if(n==1)return a;
    int i = n-1;
    while(i>0){
        if(a[i]<=a[i-1])
            i--;
        else{
            sort(a.begin()+i,a.end());
            int j=i;
            while(a[j]<=a[i-1])
                j++;
            swap(a[j],a[i-1]);    
            return a;
        }
            
    }
    sort(a.begin(),a.end());
    return a;
}
