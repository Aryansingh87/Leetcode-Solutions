class Solution {
public:
void findcombination(int idx , vector<int>& candidates, int target , vector<vector<int>>& ans , vector<int>& combin){
    if(target==0){
        ans.push_back(combin);
        return;
    }
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]) continue;

        if(candidates[i]>target) break;

        combin.push_back(candidates[i]);
        findcombination(i+1 , candidates , target-candidates[i] , ans , combin);
        combin.pop_back();
    }


}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<vector<int>> ans;
        vector<int> combin;
        findcombination(0 ,candidates , target , ans , combin);
        return ans;
    }
};
