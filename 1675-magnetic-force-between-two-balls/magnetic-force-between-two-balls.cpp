class Solution {
public:

    bool check(const vector<int>&p, int m, int k){
        int last = p[0];
        int placed=1;
        for(int i=1;i<p.size();i++){
            if(p[i]-last>=k){
                placed++;
                last = p[i];
            if(placed==m) return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        int l=0,r=1e9, mid;
        sort(position.begin(),position.end());
        while(l+1<r){
            mid = l+(r-l)/2;
            if(check(position, m ,mid)){
                l= mid;
            }       
            else {
                r=mid;
            }

            }
             return l;
    }
};