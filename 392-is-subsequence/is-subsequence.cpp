class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0, r=0;
        if(s.size()>t.size()) return false;
        while(r<t.size()){
            if(s[l]==t[r]){
                l++;
            }
            r++;
        }
        return l==s.size();
    }
};