class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int lastfruit = -1 , seclastfruit = -1;
        int currcount = 0 , maxlen =0;
        int lastfruitstreak =0;
    
     for(int fruit : fruits){
        if(fruit == lastfruit || fruit == seclastfruit){
            currcount++;
        }else{
            currcount = lastfruitstreak + 1;
        }
        if(fruit==lastfruit){
            lastfruitstreak++;
        }
        else{
            lastfruitstreak=1;
            seclastfruit = lastfruit;
            lastfruit = fruit;
        }
        maxlen = max(maxlen , currcount);
     }
     return maxlen;
    }
};
