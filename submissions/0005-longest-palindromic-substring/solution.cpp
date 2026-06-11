class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1){
            return s;
        }
        
        int max_len = 1;
       
        int start_idx = 0; 
        
        for(int i = 0; i < s.length(); i++){
            for(int j = i + max_len; j <= s.length(); j++){
                if(j - i > max_len && isPalindrome(s, i, j - 1)){
                    max_len = j - i;
                    start_idx = i;
                }
            }
        }
        return s.substr(start_idx, max_len);
    }

private:
    // Pass the original string by reference and use left/right markers
    bool isPalindrome(const std::string& str, int left, int right) {
        while(left < right){
            if(str[left] != str[right]){
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};

