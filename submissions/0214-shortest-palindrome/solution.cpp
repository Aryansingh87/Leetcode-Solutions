class Solution {
public:
    string shortestPalindrome(string s) {
        long long prefix = 0;
        long long suffix = 0;

        long long base = 29;
        long long last_index = -1;
        long long power = 1;
        long long mod = 1e9 + 7;

        for (int i = 0; i < s.length(); i++) {
            long long c = s[i] - 'a' + 1;

            // Forward hash
            prefix = (prefix * base) % mod;
            prefix = (prefix + c) % mod;

            // Reverse hash
            suffix = (suffix + c * power) % mod;
            power = (power * base) % mod;

            // If hashes are equal, s[0...i] is a palindrome
            if (prefix == suffix) {
                last_index = i;
            }
        }

        string remaining = s.substr(last_index + 1);

        // Reverse the remaining suffix and put it in front
        reverse(remaining.begin(), remaining.end());

        return remaining + s;
    }
};
