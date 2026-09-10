class Solution {
public:
  int robber(vector<int>& nums ,  int idx,  int end , vector<int>& curr){
    if(idx>end){
        return 0;
    }
    if(curr[idx]!=-1){
        return curr[idx];
    }
    int rob =nums[idx] + robber(nums , idx+2 , end , curr);
    int skip = robber(nums , idx+1 , end , curr);
    return curr[idx] = max(rob , skip);

  }
    int rob(vector<int>& nums) {
       
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n , -1);
        int case1 = robber(nums , 0 ,n-2 , dp1);

        vector<int> dp2(n , -1);
        int case2 = robber(nums ,1 , n-1 , dp2);
        return max(case1 , case2);
    }
};
