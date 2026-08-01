class Solution {
public:
    int countValidPrefixes(string s) {
        int count=0;
        int count1=0;
        int valid=0;
        for(char ch : s){
            if(ch == '0'){
                count++;
            }
            else{
                count1++;
            }
            if(std::abs(count - count1) <=1){
                valid++;
            }
        }
        return valid;
    }
};
