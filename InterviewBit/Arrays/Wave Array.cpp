vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int exchange = A.size()/2;
    for(int i=0;i<A.size() && exchange>0;i+=2,exchange--){
        int temp = A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    return A;
}
