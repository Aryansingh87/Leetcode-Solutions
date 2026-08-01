class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> ans;
        for(int i=0;i<n;i++)
            ans.push_back(i+1);
        
        int i=0;
        while(1){
            if(ans.size()==1){
                break;
            }
            i=(i+k-1)%(ans.size());
            ans.erase(ans.begin()+i);
        }
        
        
        return ans[0];
    }
};
