class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string ans ="";
        sort(str.begin() , str.end());
        int n=str.size();
        string st = str[0] , end = str[n-1];
        for(int i=0;i<min(st.size() , end.size()); i++){
            if(st[i] != end[i]){
                return ans;
            }
            ans = ans + st[i];
        }
        return ans;

    }
};
