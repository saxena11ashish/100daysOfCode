class Solution {
public:
    int myAtoi(string str) {
        if(!str.length()) return 0;
        int n=str.length();
        long sum=0;
        int flag=0;
        int i=0;
        while(i<n){
            if(str[i]==' ') i++;
            else break;
        }
        if(i!=n){
            if(str[i]=='-'){
                flag=1;
                i++;
            }
            else if(str[i]=='+') i++;
        }
        for(i;i<n;i++){
            long t=str[i]-'0';
            if(t>=0 && t<=9){
                sum=sum*10+t;
                if(sum>INT_MAX) 
                    return (flag==1)?INT_MIN:INT_MAX;
            }
            else break;
        }
        if(flag==1)return -sum;
        return sum;    }
};