class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int n = s.size();
        
        for(int i = 0; i < n; i++) {
            int pos = s[i] - 'a' + 1;     // alphabet position
            int reverse = 26 - pos + 1;   // reverse degree
            sum += reverse * (i + 1);     // multiply with 1-based index
        }
        
        return sum;
    }
};
