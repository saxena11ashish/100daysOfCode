//BEST SOLUTION
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x % 10 == 0 && x != 0))return false;
        if(x<10)return true;
        int reverted=0;
        while(x>reverted){
            reverted = reverted * 10 + (x%10);
            x /= 10;
        }
        return (x==reverted || x==reverted/10);
    }
};	//Takes log(n) time

/*
class Solution {
public:
    int reverse(int a) {
        long x = a;
        long ans= 0;
        while(x>0){
            ans = ans*10 + (x%10);
            x/=10;
        }
        if(ans > INT_MAX)return -1;
        return (int)(ans);
    }
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<=9)return true;
        return ( x==reverse(x) ) ;
    }
};*/	//FASTER THAN CODE BELOW

/*	WORKS BUT VERY SLOW
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<=9)return true;
        string s = to_string(x);
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j])return false;
        }
        return true;
    }
};
*/