class Solution {
public:
    int minRotations(string s) {
        int count =0;
       int total=0;
        for(char ch : s){
            int target = ch -'0';
            int diff = abs(target - count);
            total += min(diff , 10 - diff);
            count  = target;
        }
        return total;
    } 
};
