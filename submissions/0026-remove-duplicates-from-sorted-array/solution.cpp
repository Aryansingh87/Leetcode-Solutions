class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int idx=1 , n=A.size();
        for(int i=1; i<n; i++){
            if(A[i] != A[i-1] ){
                A[idx] = A[i];
                idx++;
            
            }
        }
        return idx;
    }
};
