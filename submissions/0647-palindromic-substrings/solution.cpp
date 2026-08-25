class Solution {
public:
  int expandfromcentre(string s , int left , int right){
   int count =0;
   while(left >= 0 && right<s.length()&&s[left]==s[right]){
    count++;
    left--;
    right++;
   }
   return count;
  }
    int countSubstrings(string s) {
          int n = s.length();
    int totalpalindrome = 0;
    for(int i=0;i<n;i++){
        totalpalindrome += expandfromcentre(s , i , i);
         totalpalindrome += expandfromcentre(s , i , i+1);

    }
    return totalpalindrome;
    }
};
