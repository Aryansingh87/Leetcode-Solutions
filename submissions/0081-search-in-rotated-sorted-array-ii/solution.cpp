class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st=0 , end=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(st<=end){
            int mid= st + (end-st)/2;
            if(nums[mid] == target ){
                return true;
            }
            
           else if(target > nums[mid]){
                st=mid+1;
            }
            else
            {
            end=mid-1;
            }

            
        }
        return false;
    }     
    
};
