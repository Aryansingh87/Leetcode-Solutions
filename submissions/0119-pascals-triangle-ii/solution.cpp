class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        long long curr =1;
        for(int i=1;i<=rowIndex;i++){
            curr = curr * (rowIndex-i+1);
            curr = curr/i;
            ans.push_back(static_cast<int>(curr));
        }
        return ans;
    }
};
