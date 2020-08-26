vector<int> Solution::plusOne(vector<int> &a) {
    int i = 0;
    while(a[i]==0){
        i++;
    }
    a.erase(a.begin(),a.begin()+i);
    if(a.size()==0)return {1};
    int n = a.size(),carry=0,one=1;
    for(int i=n-1;i>=0;i--){
        if(a[i]+carry+one<=9){
            a[i] = a[i]+carry+one;
            return a;
        }
        else{
            a[i]=0;
            carry=1;
        }
        one = 0;
    }
    if(carry)
        a.insert(a.begin(),1);
    return a;
}
