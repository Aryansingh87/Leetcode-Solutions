class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.length();
        int idx = -1 , i;
        for(int i =n-1;i>=0;i--){
            if((s[i]-'0') % 2==1){
                idx = i;
                break;
            }
        }
        i=0;
        while(i<=idx && s[i]=='0'){
            i++;
        }
        return s.substr(i , idx-i +1);
    }
};
