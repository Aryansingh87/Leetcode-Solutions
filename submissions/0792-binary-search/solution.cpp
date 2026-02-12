class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int st=0 , end=n-1, i;
        while(st<=end){
            int mid = st+ (end-st)/2;
            if(a[mid]==target){
                return mid;
            }
            else if(target>a[mid]){
                st=mid+1;
                
            }else{
                end=mid-1;
                
            }
        }
        return -1;
    }
};
