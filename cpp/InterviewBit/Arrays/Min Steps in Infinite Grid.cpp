int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if(A.size()==1)return 0;
    int steps = 0;
    for(int i=1;i<A.size();i++){
        steps+=(max(abs(A[i]-A[i-1]),abs(B[i]-B[i-1])));
    }
    return steps;
}
