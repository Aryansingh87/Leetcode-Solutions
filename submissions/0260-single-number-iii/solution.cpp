class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       unsigned int numxor = 0;
       
       for(int num : nums)
        {
            numxor = numxor ^ num;

        }
        int diff = numxor & -numxor;
        int a=0 , b=0;
        for(int num : nums){
            if(num & diff){
                a = a^num;
            }
            else{
                b= b^ num;
        }
    
    }
    return {a,b};
    }

};
