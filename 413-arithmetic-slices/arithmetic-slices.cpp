class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        int ans=0;
        vector<int>diff(nums.size()-1,0);
        for(int i=1;i<nums.size();i++){
            diff[i-1]=(nums[i]-nums[i-1]);
        }
        int cnt=1;
        for(int i=0;i<diff.size()-1;i++){
            int ele = diff[i];
            if(diff[i+1]==ele){
                cnt++;
            }
            else {
                if(cnt>=2)ans+=cnt*(cnt-1)/2;
                cnt=1;
                
            }
        }
       if(cnt>=2)ans+=cnt*(cnt-1)/2;
         return ans;
    }
};