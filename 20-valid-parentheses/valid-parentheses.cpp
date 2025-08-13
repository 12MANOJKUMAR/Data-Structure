class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='(') st.push(s[i]);
            else {
                if(st.empty()) return false; // this will handle the condition when there is only close parenthesis occurs
                else if(s[i]==']' && st.top()!='[') return false;
                else if(s[i]=='}' && st.top()!='{') return false;
                else if(s[i]==')' && st.top()!='(') return false;
                else st.pop();
            }
        }
         return st.empty();
    }
};