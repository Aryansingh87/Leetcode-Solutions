class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if(k<=1) return 0;
        int total = 0;
        int currprod = 1;
        for(int left=0, right = 0; right < nums.size();right++){
            currprod *= nums[right];

            while(currprod>=k){
                currprod /=nums[left++];
            }
            total += right - left + 1;
        }
        return total;
       
    }
};
