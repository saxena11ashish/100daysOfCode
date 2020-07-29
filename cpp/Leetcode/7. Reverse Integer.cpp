class Solution {
public:
    int reverse(int a) {
        //x*=1;
        long x = a;
        bool negative = false;
        if(x<0){
            x*=-1;
            negative = true;
        }
        long ans= 0;
        while(x>0){
            ans = ans*10 + (x%10);
            x/=10;
        }
        if(ans > INT_MAX)return 0;
        return (int)(negative ? ans*(-1):ans);
    }
};	// Faster tha 100% leetcode solutions