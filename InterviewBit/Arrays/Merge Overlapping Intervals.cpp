/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool help(Interval a,Interval b){
    return (a.start < b.start);
}
vector<Interval> Solution::merge(vector<Interval> &x) {
    sort(x.begin(),x.end(),help);
    vector<Interval> ans;
    int i;
    for(i=0;i<x.size()-1;i++){
        if(x[i].end<x[i+1].start)
            ans.push_back(x[i]);
        else{
            x[i+1].start = x[i].start;
            x[i+1].end = max(x[i+1].end,x[i].end);
        }
    }
    ans.push_back(x[i]);
    return ans;
}

