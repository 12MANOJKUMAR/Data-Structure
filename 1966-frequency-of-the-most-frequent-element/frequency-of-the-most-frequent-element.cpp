class Solution {
public:
    bool check(int mid,vector<int>& num, vector<long long> & pf, const int & k){
        int n=num.size();
        for(int i=mid-1;i<n;i++){
            int w= i-mid+1;
            long long total = 1LL * mid * num[i]; 
            long long currsum = pf[i]-(w>0 ? pf[w-1]: 0);

        long long reqop= total -currsum;
        if(reqop<=k) return true;
        }
        return false;
    }
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       int l=0, r=nums.size()+1;
       int n=nums.size();
       vector<long long> prefix(n);
       prefix[0] = nums[0];
       for(int i =1; i < n; ++i)
        prefix[i] = prefix[i - 1] + nums[i];

       while(r>l+1){
        int mid =(r+l)/2;
        if(check(mid, nums,prefix, k)){
            l= mid;
        }
        else r=mid;
       } 
        return l;
    }
};