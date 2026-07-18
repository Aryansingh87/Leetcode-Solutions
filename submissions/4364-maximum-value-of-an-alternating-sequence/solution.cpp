class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1){
            return s;
        }
        long long odd = (n%2==0) ? (n-1) : (n-2);
        long long up = (odd +1)/2;
        long long down = odd /2;
        long long maxval = s + up *m - down*1;
        return maxval;
    }
};
