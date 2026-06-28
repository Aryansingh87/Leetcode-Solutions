class Solution {
public:
   int minElement(vector<int>& nums) {
        
        int minval = INT_MAX;
        for(int num : nums){
            int currSum =0;
            while(num > 0){
                currSum = currSum + num%10;
                num =num/10;
            }
            minval = min(minval , currSum);
        }
        return minval;
        

    }
};
