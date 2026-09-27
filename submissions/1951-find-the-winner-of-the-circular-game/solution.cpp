class Solution {
public:
    int findTheWinner(int n, int k) {
        int survive=0;
  for(int i=2;i<=n;i++){
      survive=(survive+k) % i;
      
  }
        return survive+1;
    }
};
