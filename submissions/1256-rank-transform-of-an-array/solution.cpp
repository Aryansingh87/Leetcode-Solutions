class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans = arr;
       sort(ans.begin() , ans.end());
       unordered_map<int , int> rank;
       int currRank =1;
       for(int num : ans){
        if(!rank.count(num)){
            rank[num] = currRank++;
        }
       }
       for(int &num : arr){
        num = rank[num];
       }
       return arr;
        
    }
};
