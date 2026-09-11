class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int globalmax = nums[0] , globalmin = nums[0];
        int currmax =0 , currmin =0;
        int total=0;
        for(int n : nums){
            currmax = max(currmax + n , n);
            currmin = min(currmin + n , n);
            total = total + n;
            globalmax = max(globalmax , currmax);
            globalmin = min(globalmin , currmin);
        }
        if(globalmax > 0){
            return max(globalmax , total-globalmin);
        }
        return globalmax;
    }
};
