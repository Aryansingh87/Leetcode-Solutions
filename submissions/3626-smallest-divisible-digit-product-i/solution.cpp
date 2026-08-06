class Solution {
public:
    int smallestNumber(int n, int t) {
      
      int number = n;
      while(true){
        int prod = 1;
       int x= number;
        while(x){
        prod = prod * (x % 10);
        x= x/10;
        }
        if(prod % t == 0){
            break;
        }else number++;
      }
      return number;
    
    }
};
