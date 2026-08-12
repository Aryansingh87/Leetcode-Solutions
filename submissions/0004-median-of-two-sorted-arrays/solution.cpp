class Solution {
public:
   void merge(vector<int>& nums1 , vector<int>& nums2 , int n , int m){
    int idx = m+n-1 , i=m-1 , j =n-1;
    while(i>=0 && j>=0){
        if(nums1[i] >= nums2[j]){
            nums1[idx] = nums2[i];
            
            i--;
        } else{
            nums1[idx] =nums2[j];
            
            j--;
        }
        idx--;
    }
        while(j >= 0){
            nums1[idx] = nums2[j];
              idx--;
            j--;
        }
    
   }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() , n = nums2.size();
    
        vector<int> merged;
        
        int i = 0, j = 0;

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }

        while (i < m) {
            merged.push_back(nums1[i++]);
        }

        while (j < n) {
            merged.push_back(nums2[j++]);
        }

        int totalSize = merged.size();

        if (totalSize % 2 == 0) {
            return (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
        }

        return merged[totalSize / 2];
    }
};
