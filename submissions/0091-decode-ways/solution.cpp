

class Solution {
public:   
    int dfs(int i, const string& str, unordered_map<int, int>& memo) {
        // Base case: if we already calculated this index
        if (memo.find(i) != memo.end()) {
            return memo[i];
        }
        // Base case: string reaches the end successfully
        if (i == str.length()) {
            return 1;
        }
        // Base case: leading zero is invalid
        if (str[i] == '0') {
            return 0;
        }

        // Single digit decode
        int res = dfs(i + 1, str, memo);
        
        // Two digit decode
        if (i + 1 < str.length() && 
            (str[i] == '1' || (str[i] == '2' && str[i + 1] >= '0' && str[i + 1] <= '6'))) {
            res += dfs(i + 2, str, memo);
        }

        // Memoize and return
        memo[i] = res;
        return res;
    }

    int numDecodings(string s) {
        unordered_map<int, int> memo;
        // Initialize the base case for the end of the string
        memo[s.length()] = 1; 
        
        return dfs(0, s, memo);
    }
};

