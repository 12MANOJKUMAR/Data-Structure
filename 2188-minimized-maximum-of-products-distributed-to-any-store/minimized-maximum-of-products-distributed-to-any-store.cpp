class Solution {
public:

    bool check(int n, const vector<int> &q, int k){
        int cnt=0;
        for(int it: q){
          cnt += (it + k - 1) / k;
        }
        return cnt<=n;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l=0, r=1e9, mid;
        while(r>l+1){
            mid = l+(r-l)/2;
            if(check(n,quantities,mid)){
                r= mid;
            }
            else
            {
                l=mid;
            }
        }
        return r;
        
    }
};