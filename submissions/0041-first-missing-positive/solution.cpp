class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> m;
        for(int num : nums){
            m.insert(num);
        }
        int n= nums.size();
        for(int i=1;i<=n+1;i++){
        if(m.find(i)==m.end()){
            return i;
        }
        }
        return 1;
    }
};
