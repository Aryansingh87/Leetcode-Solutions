class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int st = 0 , end = n-1;
        int mod = 1e9 +7;
        vector<int> power(n,1);
        for(int i=1; i<n;i++){
              power[i] = power[i-1] * 2 % mod;
        }
        int ans=0;
        while(st <= end){
            if(nums[st] + nums[end] <= target){
                ans = (ans + power[end - st]) % mod;
                st++;
            }else{
                end--;
            }
        }
        return ans;

    }
};
