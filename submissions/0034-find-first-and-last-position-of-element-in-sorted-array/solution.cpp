class Solution {
public:
     int Findfirst(vector<int>& nums, int target){
        int st = 0 , end= nums.size()-1;
       int firstidx=-1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid]==target){
                firstidx = mid;
                end = mid-1;
            }else if(nums[mid] < target){
               st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return firstidx;
     }
     int Findlast(vector<int>& nums, int target){
        int st = 0 , end= nums.size()-1;
      int  lastidx=-1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid]==target){
                lastidx = mid;
                st = mid+1;
            }else if(nums[mid] < target){
               st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return lastidx;
     }
    vector<int> searchRange(vector<int>& nums, int target) {
       int first = Findfirst(nums , target);
       if(first == -1){
        return {-1, -1};

       }
       int last = Findlast(nums , target);
        return {first , last};
       
    }
};
