class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int , int> m;

        m[0]= -1;
        int maxlen = 0 , count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count +=1;
            }else{
                count -=1;
            }
            if(m.find(count) != m.end()){
                maxlen = max(maxlen , i -m[count]);
            }else{
                m[count] = i;
            }
        }
        return maxlen;

        
    }
};
