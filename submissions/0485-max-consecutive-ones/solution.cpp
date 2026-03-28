class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int sum=0 ,  curr=0;
        for(int num : nums){
            
            
                if(num==1){
                    curr++;
                    sum=max(sum , curr);
                }else{
                    curr=0;
                }
            
        }
        return sum;
    }
};
