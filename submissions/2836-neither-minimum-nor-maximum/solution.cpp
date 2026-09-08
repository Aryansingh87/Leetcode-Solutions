class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return -1;
        int maxi = *max_element(nums.begin() , nums.end());
        int mini = *min_element(nums.begin() , nums.end());

        for(int val : nums){
            if(val > mini && val < maxi){
                return val;
            }
        }
        return -1;
    }
};
