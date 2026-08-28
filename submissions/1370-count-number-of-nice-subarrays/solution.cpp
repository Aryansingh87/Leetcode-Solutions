class Solution {
public:
int countatmost(vector<int>& nums, int k){
    if(k<0) return 0;
    int left =0 ;
    unsigned ans =0;
    int count=0;
    for(int right=0;right<nums.size();right++){
        if(nums[right] % 2 !=0){
            count++;
        }
        while(count>k){
            if(nums[left] % 2 !=0){
                count--;
                
            }
            left++;
            
        }
        ans = ans + abs(right-left +1);
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countatmost(nums, k) - countatmost(nums, k-1);
    }
};
