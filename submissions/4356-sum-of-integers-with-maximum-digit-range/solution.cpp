class Solution {
public:
    int getDigitRange(int num){
        if (num ==0) return 0;
        int large = 0;
        int small =9;
        while(num > 0){
            int r= num%10;
            large = max(large , r);
            small = min(small , r);
            num /= 10;
            
        }
        return large - small;
    }
    int maxDigitRange(vector<int>& nums) {
        int maxrange = -1;
        int sum=0;
        for(int num : nums){
            int range = getDigitRange(num);
            if(range > maxrange){
                maxrange = range;
                sum = num;
            }else if (range == maxrange){
                sum = sum + num;
            }
        }
        return sum;
    }
};
