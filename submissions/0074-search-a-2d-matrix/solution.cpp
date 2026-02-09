class Solution {
public:
bool searchinrow (vector<vector<int>>& mat , int target , int row){
     int  n=mat[0].size();
     int st=0 , end=n-1;
     while(st<=end){
        int mid= st+(end-st)/2;
        if(target==mat[row][mid]){
            return true;
        }else if(target > mat[row][mid]){
            st=mid+1;

        }else{
            end=mid-1;
        }
     }
     return false;
}
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m= mat.size() , n=mat[0].size();
        int strow=0 , erow=m-1;
        while(strow<=erow){
            int midrow=strow+(erow-strow)/2;
            if(target>= mat[midrow][0] && target <=mat[midrow][n-1]){
                return searchinrow(mat , target ,midrow );

            }else if(target>=mat[midrow][n-1]){
                
                    strow=midrow+1;
                }
                else {
                    erow=midrow-1;
                }
            }
            return false;
        }
        
    
};
