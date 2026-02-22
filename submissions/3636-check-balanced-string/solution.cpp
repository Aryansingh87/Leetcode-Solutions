class Solution {
public:
    bool isBalanced(string num) {
       int n=num.length();
       int esum=0 , osum=0;
       for(int i=0;i<n;i++){
        if(i%2==0){
            esum+=num[i] - '0';

        }else{
            osum+=num[i] - '0';
        }
       }
       return esum==osum;

        
    }
};
