class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
       for(int i=0;i<s.size();i++){
        char c1 = s[i];
        char c2 = t[i];

        for(int j=0;j<t.size();j++){
            if(s[j]==c1 && t[j]!=c2 || s[j]!=c1 && t[j]==c2) return false;

            
        }
       }
       return true;
    }
};