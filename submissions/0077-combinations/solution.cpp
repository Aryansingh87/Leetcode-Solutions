class Solution {
public:
   void backtrack(int st ,vector<vector<int>>& ans , vector<int>& combin , int n , int k){
         if(combin.size()==k){
            ans.push_back(combin);
            return;
         }
         for(int num=st;num<=n;num++){
            combin.push_back(num);
            backtrack(num+1 , ans , combin , n, k);
            combin.pop_back();
         }
   }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
         vector<int> combin;
     backtrack(1 , ans , combin , n , k);
     return ans;
        
        
              

    }
};
