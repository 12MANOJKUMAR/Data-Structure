class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0,h=nums.size()-1;
        vector<int>ans(nums.size(),pivot);
        for(int i =0, j=h;i<nums.size(),j>=0;i++,j--){
            if(nums[i]<pivot){
                ans[l]=nums[i];
                l++;
            }
            if(nums[j]>pivot){
                ans[h]= nums[j];
                h--;
            }
        }
        return ans;
    }
};