class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int count = 0;
        for(int right =n-1;right>=2;right--){
            int i = 0;
            int j = right-1;
            while(i<j){
 if(nums[i]+nums[j] > nums[right]){
    count += j-i;
    j--;
 }else{
    i++;
  }
            }
        }
        return count;
    }
};
