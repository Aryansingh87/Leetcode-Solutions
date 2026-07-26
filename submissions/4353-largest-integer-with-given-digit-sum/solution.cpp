class Solution {
public:
    int largestInteger(int n, int s) {
        if(s> 9*n){
            return -1;
        }
        if(s==0){
            return (n>=1) ? 0 : -1 ;
        }
        long long ans = 0;
        for(int i =0 ; i< n ; i++){
            int curr =0;
            if( s>=9){
                curr =9;
                s = s-9;
            }
            else if( s > 0){
            curr =s;
                s=0;
            } else{
               curr = 0;
            }
            ans = ans * 10 + curr;
        }
        return ans;;
    }
};
