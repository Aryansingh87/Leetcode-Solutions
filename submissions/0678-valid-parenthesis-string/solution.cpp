class Solution {
public:
    bool checkValidString(string s) {
        stack<char> st;
        stack<char> open;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]=='*'){
                open.push(i);
            }
            else{
                if(st.size()>0){
                    st.pop();
                }else if(open.size()>0){
                    open.pop();
                }
                 else{
                    return false;
                 }
            }
        } 
        while(st.size()>0 && open.size()>0){
            if(st.top()>open.top()){
                return false;
            }
            st.pop();
            open.pop();
        }
        return st.empty();
    }
};
