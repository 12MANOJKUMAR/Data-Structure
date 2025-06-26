class Solution {
public:
    static bool check(const int& wd,vector<int>& bd, int m, int k ){
        int total=0;
        int cnt=0;
        for(int it: bd){
            if(it<=wd){
                cnt++;
                if(cnt==k){
                total++;
                cnt=0;
            }
            }
            else {
                cnt=0;
            }
        }
        return total>=m;
  
           }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n) return -1; 
        int l=0,r=1e9;
        while(r>l+1){
        int mid =l+(r-l)/2;

        if(check(mid,bloomDay,m,k)){
            r=mid;
        }
        else l=mid;
        }
        return l+1;
    }
};