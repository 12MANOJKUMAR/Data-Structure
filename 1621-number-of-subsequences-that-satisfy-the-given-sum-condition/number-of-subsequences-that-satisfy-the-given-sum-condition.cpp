class Solution {
public:
const int MOD=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> power(n,1);
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%MOD;
        }
        int lo=0,hi=nums.size()-1;
        while(hi>=lo){
            if(nums[lo]+nums[hi]<=target){
                int diff=hi-lo;
            ans = (ans%MOD+power[diff])%MOD;
                lo++;
            }
            else {
                hi--;
            }

        }
        return ans;
    }
};