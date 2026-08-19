class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        long long sum = 0;
        for(int i =0;i<n;i++){
            unordered_map<char , int> freq;
            for(int j =i;j<n;j++){
            freq[s[j]]++;
            int maxim = INT_MIN;
            int mini = INT_MAX;
            for(auto idx : freq){
             maxim =max(maxim , idx.second);
             mini = min(mini , idx.second);
            }
            
             sum = sum + (maxim - mini);
            
            }
        }
        return sum;
    }
};
