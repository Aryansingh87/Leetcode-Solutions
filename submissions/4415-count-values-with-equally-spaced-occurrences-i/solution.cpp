class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count =0;
        unordered_map<int , vector<int>> m;
        for(int i=0;i<nums.size();i++){
           m[nums[i]].push_back(i);
            
        }
           for (const auto& [val, indices] : m) {
           
            if (indices.size() == 3) {
                
                if (indices[1] - indices[0] == indices[2] - indices[1]) {
                    count++;
                }
            }
           }
        return count;
        
    }
};
