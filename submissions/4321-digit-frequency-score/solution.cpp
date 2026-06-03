class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> freq(10 , 0);
        while( n > 0){
        
        int digit= n%10;
            freq[digit]++;
        n=n/10;
        }
        int sum=0;
            for(int i=0;i<=freq.size()-1;i++){
                if(freq[i] > 0){
                    sum+= i * freq[i];
                }
            }
        return sum;
        
    }
};
