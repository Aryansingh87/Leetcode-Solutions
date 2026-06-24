class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char small = letters[0];
        bool ans = false;
        for(char ch : letters){
        if(!ans){
            if(ch > target){
                small = ch;
                ans = !ans;
            }
        }
            else{
                if(ch > target && ch < small) small = ch;
            }
        }
        return small;
        
        
    }
};
