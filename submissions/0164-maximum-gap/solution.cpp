class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        if(nums.size()<2) return 0;
        int n = nums.size();
        long long ans =0;
        for(int i=0;i<n-1;i++){
            long long  diff = (long long)nums[i+1] - nums[i];
            ans = max(ans , diff);
        }
        return ans;
    }
};
