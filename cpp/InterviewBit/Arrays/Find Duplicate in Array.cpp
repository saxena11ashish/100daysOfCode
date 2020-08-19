int Solution::repeatedNumber(const vector<int> &A) {
    long long int n = A.size();
    n = (n*(n-1))/2;
    for(int i:A)
        n-=i;
    return -n;
}
