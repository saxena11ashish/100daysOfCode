class Solution {
public:
    string intToRoman(int n) {
        string s[4][10]={
            {"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM"}
        };
        return s[3][n/1000]+s[2][(n/100)%10]+s[1][(n/10)%10]+s[0][n%10];        
    }
};
/*	Beats 76% submissions
class Solution {
public:
    string intToRoman(int n) {
        int a[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ch[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        for(int i=0;i<13;    ){
            if(n>=a[i]){
                ans+=ch[i];
                n-=a[i];
            }
            else
                i++;
        }
        return ans;
    }
};
*/