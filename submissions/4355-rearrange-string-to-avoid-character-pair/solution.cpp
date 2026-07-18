class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ys = "" , xs= "" , t="";
        for(char ch : s)
            {
                if(ch==y){
                    ys = ys + ch;
                }
                else if (ch==x){
                    xs = xs + ch;
                }
                else 
                    t = t+ ch;
            }
        return ys + xs + t;
    }
};
