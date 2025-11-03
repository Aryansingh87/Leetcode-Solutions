class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int maxproduct=INT_MIN , currproduct=1;
        for(int i=0;i<arr.size();i++){
            currproduct=currproduct*arr[i];
            maxproduct = max(currproduct , maxproduct);
            if(currproduct == 0){
                currproduct =1;
            }
        }
        currproduct=1;
            for(int i=arr.size()-1;i>=0;i--){
                currproduct*=arr[i];
                maxproduct=max(currproduct , maxproduct);
                if(currproduct==0){
                    currproduct=1;
                }
            }
            
           
        
        return maxproduct;

        
    }
};
