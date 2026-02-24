class Solution {
public:
    bool detectCapitalUse(string s) {
      int count=0 ,  n=s.size();
        if(n==1){
            return true;
        }
        for(int i=0;i<n;i++)
            if(isupper(s[i]))
            count++;
        
        if(count==1 && isupper(s[0]))
        return true;
       else if(count==0 || count==n)
        return true;
        else
        return false;
        
    }
};
