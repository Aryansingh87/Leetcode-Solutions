class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int val : nums){
            int x = a;
            a = max(a , val);
            b = max(b , min(x , val));
        }
        return (a-1) * (b-1);
    }
};
