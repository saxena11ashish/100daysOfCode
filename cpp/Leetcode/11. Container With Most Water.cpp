//	Runs in 28ms, beats 93% solutions
class Solution {
public:
    int maxArea(vector<int>& a) {
        int water = 0,temp=0;
        for(int i=0,j=a.size()-1; i<j ;    ){
            temp = (j-i)*min(a[i],a[j]);
            water = max(water,temp);
            a[i] < a[j] ? i++ : j--;
        }
        return water;
    }
};

/*	NOT FAST ENOUGH, Runs in 36ms
class Solution {
public:
    int maxArea(vector<int>& a) {
        int water = 0,temp=0;
        bool l_increasing = true,r_increasing = true;
        for(int i=0,j=a.size()-1; i<j ;    ){
            if(l_increasing || r_increasing){
                temp = (j-i)*min(a[i],a[j]);
                water = max(water,temp);    
            }
            if(a[i] < a[j]){
                i++;
                l_increasing = (a[i-1]>=a[i] ? false: true);
            }
            else{
                j--;
                r_increasing = (a[j+1]>=a[j] ? false: true);
            }
        }
        return water;
    }
};
*/