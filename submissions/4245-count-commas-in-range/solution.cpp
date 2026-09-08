class Solution {
public:
    int countCommas(int n) {
        int factor=1000;
        int count = 0;
        while(n>=factor){
            count = count + (n-factor +1);
           factor = factor * 1000;
        }
        // else{
        //     count += 1;
        // }
        return count;
    }
};
