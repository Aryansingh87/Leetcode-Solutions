class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int counts[101] = {0};
        int maxi =0;
        for(int num : nums){
            counts[num]++;
                if(num > maxi){
                maxi = num;
                }
        }
        vector<int> ans;
        ans.reserve(nums.size());
        int remaining = nums.size();
        while(remaining > 0){
            for(int val=1;val<=maxi;val++){
                if(counts[val]>0){
                    ans.push_back(val);
                    counts[val]--;
                    remaining--;
                }
            }
        }
        return ans;
    }
};
