bool comparator(string a,string b){
    string ab = a+b;
    string ba = b+a;
    return (ab.compare(ba)>0 ? true:false);

}
string Solution::largestNumber(const vector<int> &A) {
    int n = A.size(),zero = 0;
    vector<string> vs;
    for(int i:A){
        if(i==0)zero++;
        vs.push_back(to_string(i));
    }
    if(zero == n)return "0";
    sort(vs.begin(),vs.end(),comparator);
    string ans="";
    for(string s:vs)
        ans+=s;
    return ans;
}
