class Solution {
public: 
  int totaldays(vector<int>& weights, int capacity){
    int days=1;
    int currentload=0;
    for(int w : weights){
        if(currentload + w > capacity){
            days++;
            currentload = w;

        }else{
            currentload += w;
        }
    }
    return days;
  }
    int shipWithinDays(vector<int>& weights, int d) {
        int left=*max_element(weights.begin() , weights.end());
        int right = accumulate(weights.begin() , weights.end() , 0);
        while(left < right){
            int mid = left + (right-left)/2;
            int need = totaldays(weights , mid);
            if(need <= d){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        return left;
        
    }
};
