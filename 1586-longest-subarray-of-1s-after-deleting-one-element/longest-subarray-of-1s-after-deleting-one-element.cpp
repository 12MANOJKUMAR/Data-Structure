class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero=0;
        int left=0;
        int right=0;
        int n=nums.size();
        int ans=0;

        while(right<n)
        {
            if(nums[right]==0) zero++;

            while(zero>1){
                if(nums[left]==0) zero--;
                left++;
            }
            ans =max(ans, right-left+1-zero);

        right++;
        }

        return ans==n ? ans-1 : ans;
    }
};