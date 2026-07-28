class Solution {
public:
    string smallestPalindrome(string s) {
         int l=s.length();
        if(l==1 || l==0){
        return s;
        }
       
        int permut = l/2;
        sort(s.begin() , s.begin() + permut);
        for(int i=0;i<permut;i++){
             s[l-1-i] = s[i];

        }
        return s;
        
    }
};
