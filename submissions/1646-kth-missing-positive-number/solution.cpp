class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int st =0 , end = arr.size();
        int mid;
        while(st < end){
            mid = (st+end)/2;
            if(arr[mid]-1-mid < k){
                   st = mid+1;
            }else{
              end = mid;
            }
        }
        return st+k;
    }
};
