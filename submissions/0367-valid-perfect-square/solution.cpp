class Solution {
public:
    bool isPerfectSquare(int n) {
        long long i=1;
        if(n<0){
            return false;
        }
        if(n==0){
            return true;
        }
        while(i*i<=n){
        if(i*i==n){
            return true;
        }
        i++;
        
        
        }
         return false;
        
        

        
    }
};
