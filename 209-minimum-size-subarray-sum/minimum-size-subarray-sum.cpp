class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0, sum=0;
        int ans=nums.size();
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            int w=r-l+1;
            while(sum>=target){
                ans=min(ans,r-l+1);
                sum-=nums[l++];
            }
            
        }
        return accumulate(nums.begin(), nums.end(),0)<target ? 0:ans;

    }
};