class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x =0;
        long long sum =0;
        long long place = 1;
        while(n>0)
        {
            int r = n%10;
            if(r !=0){
                x = r * place + x;
                place = place * 10;
                sum = sum + r;
            }
            n= n/10;
        }
        return x*sum;
    }
};
