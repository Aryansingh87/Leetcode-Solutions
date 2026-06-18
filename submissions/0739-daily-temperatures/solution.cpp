class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        
        vector<int> ans(temps.size());
        stack<int> s;
        for(int i=0;i< temps.size();i++){
            while(s.size() > 0 && temps[s.top()] < temps[i]){
                ans[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;

    }
};
