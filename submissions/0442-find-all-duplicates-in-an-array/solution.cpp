class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int st=nums[0];
        for(int i=1;i<n;i++){
               if(!(st ^ nums[i])){
                ans.push_back(nums[i]) , i= i+1;
                if(i<n){
                    st = nums[i];
                }
                else break;
               }
               else st = nums[i];
        }
        return ans;
    }
};
