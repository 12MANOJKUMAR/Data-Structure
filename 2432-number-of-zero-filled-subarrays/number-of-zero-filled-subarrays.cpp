class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
    long long ans =0LL, cnt=0LL;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) cnt++;
        else {
            ans+=1LL*cnt*(cnt+1)/2;
            cnt=0;
        }
    }
    ans+=1LL*cnt*(cnt+1)/2;
    return ans;
    }
};