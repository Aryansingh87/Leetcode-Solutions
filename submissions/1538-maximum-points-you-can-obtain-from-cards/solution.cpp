class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=0;
        int n = cardPoints.size();
        for(int i=0;i<k;i++){
            total += cardPoints[i];
        }
        int maxpoints = total;
        for(int i=0;i<k;i++){
            total = total - cardPoints[k-1-i];
            total = total + cardPoints[n-1-i];
            maxpoints = max(maxpoints , total);

        }
        return maxpoints;
    }
};
