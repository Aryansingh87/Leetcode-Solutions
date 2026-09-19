class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> m;
        for(int n : nums)
        {
            m[n]++;
        }
        vector<vector<int>> freq(nums.size()+1);

        for(auto& pair : m){
            int num = pair.first;
            int c = pair.second;
            freq[c].push_back(num);
        }
        vector<int> ans;

        for(int i=freq.size()-1;i>0;i--){
            for(int n : freq[i]){
                ans.push_back(n);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
