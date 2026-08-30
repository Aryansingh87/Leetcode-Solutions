class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unsigned count =0;
        if(nums.empty()) return 0;
         
            unordered_set<int> m(nums.begin() , nums.end());
          unordered_set<int> visited;
        unordered_set<int> invalid;
        for(int i=1;i<nums.size();i++){
        
            if(nums[i]!=nums[i-1]){
                visited.insert(nums[i-1]);
            }
            if(visited.count(nums[i])){
                invalid.insert(nums[i]);
            }
        }
        return m.size()-invalid.size();
    }
};
