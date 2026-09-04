class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       if(nums.size()==0) return -1;
       for(int i=0;i<nums.size();i++){
        int maxi = nums[i] , mini = nums[i];
        for(int j=0;j<i;j++){
            maxi = max(maxi , nums[j]);
        }
        for(int j=i+1;j<nums.size();j++){
            mini = min(mini , nums[j]);
        }
        if(maxi -  mini <=k){
            return i;
        }
       }
       return -1;
    }
};
