class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0 , end=nums.size()-1;
        // sort(nums.begin(),nums.end());//
        while(st<=end){
            int mid= st + (end-st)/2;
            if(nums[mid] == target ){
                return mid;
            }
            
           if(nums[mid] >= nums[st]){
                if(target >= nums[st]&& target<nums[mid]){
                  end = mid - 1;  
                }
            
            else
            {
            st=mid+1;
            }
           }
           else{
            if (target > nums[mid] && target <= nums[end]) {
                    st = mid + 1; // move right
                } else {
                    end = mid - 1; // move left
                }
            }
           }

         
        
        return -1;
    }
};
