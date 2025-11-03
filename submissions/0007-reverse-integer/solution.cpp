class Solution {
public:
    int reverse(int n) {
        {
    long long reverse = 0;
    while (n != 0) {
        int remainder = n % 10;
     reverse = reverse * 10 + remainder;
        n /= 10;
        if(reverse > INT_MAX || reverse < INT_MIN){
            return 0;
        }
    }
    return reverse;
}


        
    }
};
