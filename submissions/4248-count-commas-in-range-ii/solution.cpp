class Solution {
public:
    long long countCommas(long long n) {
        long long factor1 = 1000;
      
          
        
        long long count1=0;
       
        while(n>=factor1){
            count1 += n-factor1+1;
            factor1 = factor1 * 1000;
        }
        
        return count1;
    }
};
