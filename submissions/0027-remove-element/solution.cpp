class Solution {
public:
    int removeElement(vector<int>& A, int val) {
        int n=A.size() , idx=0;
        for(int i=0;i<n;i++){
            if(A[i] != val){
                A[idx] = A[i];
                idx++;
            }
        }
        return idx;
        
    }
};
