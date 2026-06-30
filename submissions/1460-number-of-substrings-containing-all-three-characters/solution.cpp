class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans = 0;
        int arr[3] = {-1, -1, -1};

        for (int i = 0; i < s.length(); i++) {
            arr[(s[i] & 31) - 1] = i;
            ans += min({arr[0], arr[1], arr[2]}) + 1;
        }

        return ans;
    }
};
