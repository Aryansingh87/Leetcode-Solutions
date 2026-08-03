class Solution {
public:
    void backtrack(string combination , string nextdigit, vector<string> phone_map, vector<string>& ans){
        if(nextdigit.empty()){
            ans.push_back(combination);
        } else{
            string letters = phone_map[nextdigit[0]- '2'];
            for(char ch : letters){
                backtrack(combination+ch, nextdigit.substr(1) , phone_map , ans);
            }
    }
    
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> phone_map = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        backtrack("",digits,phone_map , ans);
        return ans;
    }
};
