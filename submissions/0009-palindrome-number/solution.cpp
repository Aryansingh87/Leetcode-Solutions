class Solution {
public:
    bool isPalindrome(int x) {
        long long n=x;
        long long rev=0;
          if(n<0){
            return false;
        }
        while(x>0){
          int  rem=x%10;
         rev=rev*10+rem;
            x=x/10;
        }
        if(rev==n){
            return true;
        }
        else{
            return false;
        }
    }
};
