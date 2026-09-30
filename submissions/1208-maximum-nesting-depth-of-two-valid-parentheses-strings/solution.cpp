class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int x =0;
        vector<int> ans;
        for(char ch : seq){
            if(ch == '('){
                x++;
                ans.push_back(x % 2);
            }else{
                ans.push_back(x%2);
                x--;
            }
        }
        return ans;
    }
};
