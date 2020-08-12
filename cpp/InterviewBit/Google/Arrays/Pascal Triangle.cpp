vector<vector<int> > Solution::solve(int x) {
    vector<vector<int> > v;
    vector<int> temp(2,1);
    for(int i=1;i<=x;i++){
        if(i == 1)
            v.push_back(vector<int>(1,1));
        else if(i == 2)
            v.push_back(temp);
        else{
            for(int i=0;i<temp.size()-1;i++){
                temp[i] = temp[i] + temp[i+1];
            }
            temp.insert(temp.begin(),1);
            v.push_back(temp);
        }
    }
    return v;
}
