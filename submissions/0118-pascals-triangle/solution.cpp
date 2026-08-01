class Solution {
public:
    vector<int> triangle(int N){
        long long ans =1;
        vector<int> res;
        res.push_back(1);
        for(int col=1;col<N;col++){
             ans = ans * (N -col);
             ans = ans / (col);
             res.push_back(ans);
        }
        return res;

    }
    vector<vector<int>> generate(int row) {
            vector<vector<int>> ans;
            for(int i=1;i<=row;i++){
               
                ans.push_back(triangle(i));
            }
            return ans;

    }
};
