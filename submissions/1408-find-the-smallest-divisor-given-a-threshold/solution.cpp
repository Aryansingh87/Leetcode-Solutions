class Solution {
public:
    int totalsum(vector<int>& nums , int div){
        int sum=0;
        for(int num : nums){
            sum += ceil((double) num/div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        if(nums.size() > threshold) return -1;
        int st =1 , end= *max_element(nums.begin() , nums.end());
        while(st<=end){
            int mid = st + (end-st)/2;
            if (totalsum(nums , mid) <= threshold){
                end = mid-1;
            }else{
                st=mid+1;
            }
        }
        return st;
    }
};
