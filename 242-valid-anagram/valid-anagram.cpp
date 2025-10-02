class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        vector<int>v(26,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            v[t[i]-'a']--;
        }

        for(int it:v){
            if(it!=0) return false;
        }
        return true;

    }
};