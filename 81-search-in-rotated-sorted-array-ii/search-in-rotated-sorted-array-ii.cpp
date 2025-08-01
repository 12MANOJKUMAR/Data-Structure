class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0,high = nums.size()-1;
        while(high>=low){
            int mid =low+(high-low)/2;
            if(nums[mid]==target) return true;
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low=low+1;
            high=high-1;
            continue;
            }
            // left side is sorted 
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid])
                high=mid-1;
                else 
                low=mid+1;
            }
            // right side is sorted
            else {
                if(nums[mid]<=target && target<=nums[high]){
                low=mid+1;
                }
                else 
                    high=mid-1;
                
                }
            }
            return false;
        }
};