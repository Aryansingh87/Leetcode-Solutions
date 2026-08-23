class Solution {
public:
    bool isPalindromic(std::string s) {
        std::string ans="";
        ans.reserve(s.length());
        for(char ch : s){
          ans +=std::bitset<8>(ch).to_string();
        }
        int left =0;
        int right = ans.length()-1;
        while(left < right){
            if(ans[left]!=ans[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
