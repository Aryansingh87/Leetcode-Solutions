class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int nonZeroCount = 0;
         for (int num : nums) {
            if (num != 0) {
                nonZeroCount++;
            }
        }
        
        
        int minSwaps = 0;
        for (int i = 0; i < nonZeroCount; i++) {
            if (nums[i] == 0) {
                minSwaps++;
            }
        }
        
        return minSwaps;
    }
};

