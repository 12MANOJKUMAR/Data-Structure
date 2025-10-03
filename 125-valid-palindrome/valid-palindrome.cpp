class Solution {
public:
    bool palindrome(string &st){
        int i=0,r=st.size()-1;
        while(r>=i){
            if(st[i]!=st[r]) return false;
            i++;
            r--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }

        return palindrome(ans);
    }
};