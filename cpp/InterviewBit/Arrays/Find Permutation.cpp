vector<int> Solution::findPerm(const string A, int B) {
    vector<int>v;
    stack<int>s;
    for(int i=1;i<B;i++){
        s.push(i);
        if(A[i-1]=='I'){
            while(!s.empty()){
                v.push_back(s.top());
                s.pop();
            }
        }
    }
    s.push(B);
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    return v;
}
