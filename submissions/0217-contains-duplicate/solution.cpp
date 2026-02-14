class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n=arr.size();
        for(int i=1;i<n;i++){
            
            if(arr[i]==arr[i-1])
                return true;
        
        }
        
        return false;
        
    }
};
