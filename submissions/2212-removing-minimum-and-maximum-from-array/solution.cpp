class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int count =0;
        int n = nums.size();
        if(n<=2) return n;
        int maxi = max_element(nums.begin() , nums.end()) - nums.begin();
        int mini = min_element(nums.begin() , nums.end()) - nums.begin();

        if(mini > maxi){
            swap(mini , maxi);
        }
       int front = maxi + 1;
        int back = n - mini;
        int bothSides = (mini + 1) + (n - maxi);

              return min({front, back, bothSides});
    }
};
